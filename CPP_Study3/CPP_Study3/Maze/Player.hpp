#include "pch.h"
#include "Player.h"


void Player::Init(Board* board)
{
	_pos = board->GetEnterPos();
	_board = board;

	// 자기가 이동하고 있는 위치를 시뮬레이션하기위해 갖고옴(스택에 위치함)
	Pos pos = _pos;

	// 패스 초기화 및 시작지점 추가
	_path.clear();
	_path.push_back(pos);

	// 목적지에 도착하기 전까지 계속 실행
	Pos dest = board->GetExitPos();


	Pos front[4] =
	{
		Pos { -1, 0 },	//	UP
		Pos { 0, -1 },	//	LEFT
		Pos { 1, 0 },	//	DOWN
		Pos { 0, 1 },	//	RIGHT
	};

	while (pos != dest)
	{
		// 1. 현재 바라보는 방향을 기준으로 오른쪽으로 갈 수 있는지 확인
		int32 newDir = (_dir - 1 + DIR_COUNT) % DIR_COUNT;

		if (CanGo(pos + front[newDir]))
		{
			// 오른쪽 방향으로 90도 회전
			_dir = newDir;

			// 앞으로 한 보 전진
			pos += front[_dir];
			_path.push_back(pos);

		}
		// 2. 현재 바라보는 방향을 기준으로 전진할 수 있는지 확인 
		else if (CanGo(pos + front[_dir]))
		{
			// 앞으로 한 보 전진
			pos += front[_dir];
			_path.push_back(pos);

		}
		else
		{
			// 왼쪽 방향으로 90도 회전
			
			// 우아한 방법
			_dir = (_dir + 1) % DIR_COUNT;

			// 투박한 방법
			// switch (_dir)
			// {
			// case DIR_UP:
			// 	_dir = DIR_LEFT;
			// 	break;
			// case DIR_LEFT:
			// 	_dir = DIR_DOWN;
			// 	break;
			// case DIR_DOWN:
			// 	_dir = DIR_RIGHT;
			// 	break;
			// case DIR_RIGHT:
			// 	_dir = DIR_UP;
			// 	break;
			// default:
			// 	break;
			// }
		}
	}

	stack<Pos> s;

	for (int i = 0; i < _path.size() - 1; ++i)
	{
		// 스택이 차있고, 다음으로 가야하는 길과 내가 방금까지 걸어온 길의 가장 최근길과 같다면
		if (s.empty() == false && s.top() == _path[i + 1])
		{
			// 나는 지금 되돌아가고있다.
			s.pop(); 
		}
		else
		{
			// 새로운 길이다.
			s.push(_path[i]);
		}
	}

	// 목적지 도착

	if (_path.empty() == false)
	{
		s.push(_path.back());
	}

	// 불필요하게 왔다갔다하는 부분 날아감
	// 하지만 이 상태의 스택에서 pop을 하면 거꾸로 나와서 목적지 -> 입구가 될것임

	vector<Pos> path;
	while (s.empty() == false)
	{
		path.push_back(s.top());
		s.pop();
	}

	reverse(path.begin(), path.end());
	_path = path;

}

void Player::Update(uint64 deltaTick)
{
	if (_pathIndex >= _path.size())
	{
		return;
	}

	_sumTick += deltaTick; // 전체시간에 플레이어가 움직이기전에 대기하고 있는 시간을 계속 더해줌

	if (_sumTick >= MOVE_TICK)	// 대기시간이 우리가 지정한 움직이라는 시간보다 넘기면 비로소 움직임
	{
		_sumTick = 0;

		_pos = _path[_pathIndex]; // 패스안에 저장해 놓은 이동하는 정보들을 인덱스를 통해 꺼내주는 거임
		++_pathIndex;			  // 꺼냈으면 다음 정보
	}



}

inline bool Player::CanGo(Pos pos)
{
	TileType tileType = _board->GetTileType(pos);
	return (tileType == TileType::EMPTY);
}
