#include "pch.h"
#include "Player.h"


void Player::Init(Board* board)
{
	_pos = board->GetEnterPos();
	_board = board;

	// �ڱⰡ �̵��ϰ� �ִ� ��ġ�� �ùķ��̼��ϱ����� �����(���ÿ� ��ġ��)
	Pos pos = _pos;

	// �н� �ʱ�ȭ �� �������� �߰�
	_path.clear();
	_path.push_back(pos);

	// �������� �����ϱ� ������ ��� ����
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
		// 1. ���� �ٶ󺸴� ������ �������� ���������� �� �� �ִ��� Ȯ��
		int32 newDir = (_dir - 1 + DIR_COUNT) % DIR_COUNT;

		if (CanGo(pos + front[newDir]))
		{
			// ������ �������� 90�� ȸ��
			_dir = newDir;

			// ������ �� �� ����
			pos += front[_dir];
			_path.push_back(pos);

		}
		// 2. ���� �ٶ󺸴� ������ �������� ������ �� �ִ��� Ȯ�� 
		else if (CanGo(pos + front[_dir]))
		{
			// ������ �� �� ����
			pos += front[_dir];
			_path.push_back(pos);

		}
		else
		{
			// ���� �������� 90�� ȸ��
			
			// ����� ���
			_dir = (_dir + 1) % DIR_COUNT;

			// ������ ���
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
		// ������ ���ְ�, �������� �����ϴ� ��� ���� ��ݱ��� �ɾ�� ���� ���� �ֱٱ�� ���ٸ�
		if (s.empty() == false && s.top() == _path[i + 1])
		{
			// ���� ���� �ǵ��ư����ִ�.
			s.pop(); 
		}
		else
		{
			// ���ο� ���̴�.
			s.push(_path[i]);
		}
	}

	// ������ ����

	if (_path.empty() == false)
	{
		s.push(_path.back());
	}

	// ���ʿ��ϰ� �Դٰ����ϴ� �κ� ���ư�
	// ������ �� ������ ���ÿ��� pop�� �ϸ� �Ųٷ� ���ͼ� ������ -> �Ա��� �ɰ���

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

	_sumTick += deltaTick; // ��ü�ð��� �÷��̾ �����̱����� ����ϰ� �ִ� �ð��� ��� ������

	if (_sumTick >= MOVE_TICK)	// ���ð��� �츮�� ������ �����̶�� �ð����� �ѱ�� ��μ� ������
	{
		_sumTick = 0;

		_pos = _path[_pathIndex]; // �н��ȿ� ������ ���� �̵��ϴ� �������� �ε����� ���� �����ִ� ����
		++_pathIndex;			  // �������� ���� ����
	}



}

inline bool Player::CanGo(Pos pos)
{
	TileType tileType = _board->GetTileType(pos);
	return (tileType == TileType::EMPTY);
}
