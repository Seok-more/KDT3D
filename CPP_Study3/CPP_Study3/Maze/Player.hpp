#include "pch.h"
#include "Player.h"


void Player::Init(Board* board)
{
	_pos = board->GetEnterPos();
	_board = board;

    //RightHand();
    Bfs();
	
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

inline void Player::RightHand()
{
    // 자기가 이동하고 있는 위치를 시뮬레이션하기위해 갖고옴(스택에 위치함)
    Pos pos = _pos;

    // 패스 초기화 및 시작지점 추가
    _path.clear();
    _path.push_back(pos);

    // 목적지에 도착하기 전까지 계속 실행
    Pos dest = _board->GetExitPos();


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

inline void Player::Bfs()
{
    // 자기가 이동하고 있는 위치를 시뮬레이션하기위해 갖고옴(스택에 위치함)
    Pos pos = _pos;


    // 목적지에 도착하기 전까지 계속 실행
    Pos dest = _board->GetExitPos();


    Pos front[4] =
    {
        Pos { -1, 0 },	//	UP
        Pos { 0, -1 },	//	LEFT
        Pos { 1, 0 },	//	DOWN
        Pos { 0, 1 },	//	RIGHT
    };

    const int32 size = _board->GetSize();
    //                      vector  크기,  초기화 하는 값
    vector<vector<bool>> discovered(size, vector<bool>(size, false));
    

    // parent : 어디 버텍스에서 왔는지
    // vector<vector<Pos>> parent;
    // parent[A] = B; -> A는 B로 인해 발견함
    map<Pos, Pos> parent;
    

    // 발견한 버텍스들을 저장할 큐임
    // Bfs 시작, 출발점 
    queue<Pos> q;
    q.push(pos);
    discovered[pos._y][pos._x] = true;
    parent[pos] = pos;

    // q에 예약된 애가 하나라도 있으면 계속 실행
    while (q.empty() == false)
    {
        // 가장 오래된 애를 가져온다
        pos = q.front();
        q.pop();

        // 방문!
        if (pos == dest)
        {
            break;
        }

        // 이동 4방향 판단
        for (int32 dir = 0; dir < 4; ++dir)
        {
            Pos nextPos = pos + front[dir]; // ex : (4, 0) + (0, -1) = (4, -1)

            // 갈 수 있는 지역인지 확인
            if (CanGo(nextPos) == false)
            {
                continue;
            }

            // 이미 발견한 지역인지 확인
            if (discovered[nextPos._y][nextPos._x] == true)
            {
                continue;
            }

            // 다 통과하면 예약해주고, 발견했다고 해주고
            q.push(nextPos);
            discovered[nextPos._y][nextPos._x] = true;
            parent[nextPos] = pos;

        }

    }

    // 패스 초기화 및 시작지점 추가
    _path.clear();

    // q에 예약된 길들을 거꾸로 거슬러 올라주면 최단 거리겠죠!
    // 즉, 목적지에서 출발!
    pos = dest;

    while (1)
    {
        _path.push_back(pos);

        // 시작점은 자기가 자기의 부모임 = 도착함
        if (pos == parent[pos])
        {
            break;
        }

        // 내 부모(내가 온 노드)로 이동, 역순으로 이동
        pos = parent[pos]; 

    }

    // 마지막에 뒤집어주면 끝
    reverse(_path.begin(), _path.end());

    _path.push_back(pos);

}
