#pragma once
using namespace std;
namespace kdt
{
	int Test()
	{
		return 5;
	}

	// -------------------------------------------------------------------------

	template<typename _Ty>
	class iterator_v
	{
	public: // 생성자, 소멸자
		template<typename _Ty>
		friend class vector;
		iterator_v() {}; // 기본 생성자
		iterator_v(_Ty* In_ptr) : _ptr(In_ptr) {}; // 값 넣어주는 생성자
		iterator_v(const iterator_v&) {}; // 복사 생성자

	public: // 연산자
		iterator_v& operator=(const iterator_v&) = default; // 복사 대입 연산자

		// ==			[1]
		// !=			[1]
		// ++,--()		[1]
		// ()++,--		[1]
		// *			[1]
		// ->			[1]

		bool operator==(const iterator_v& In_it)
		{
			return (_ptr == In_it._ptr);
		}

		bool operator!=(const iterator_v& In_it)
		{
			return (_ptr != In_it._ptr);
		}

		iterator_v& operator++()
		{
			if (_ptr)
			{
				++_ptr;
			}
			return *this; 
		}

		iterator_v& operator--()
		{
			if (_ptr)
			{
				--_ptr;
			}
			return *this;
		}

		iterator_v operator++(int)
		{
			iterator_v temp = *this;
			iterator_v::operator++();
			return temp;
		}

		iterator_v operator--(int)
		{
			iterator_v temp = *this;
			iterator_v::operator--();
			return temp;
		}

		_Ty& operator*() const
		{
			return *_ptr;
		}

		_Ty* operator->() const
		{
			return _ptr;
		}

	private: // 데이터
		_Ty* _ptr = nullptr;
	};

	//-------------------------------------------------------------------------

	template<typename _Ty>
	class vector
	{
	public: // 생성자, 소멸자
		vector() {};
		~vector() {};

	public: // 메서드
		// size			[1]
		// capacity		[1]
		// empty		[1]
		// begin		[1]
		// end			[1]
		// clear		[1]
		// []			[1]
		// push_back	[1]
		// emplace		[1]
		// reserve		[1]
		// resize		[1]
		// erase(!)		[1]

		using iterator = iterator_v<_Ty>;

		_NODISCARD _CONSTEXPR20 size_t size() const noexcept
		{
			return _size;
		}

		_NODISCARD _CONSTEXPR20 size_t capacity() const noexcept
		{
			return _capacity;
		}
		
		_NODISCARD _CONSTEXPR20 bool empty() const noexcept
		{
			return (_size == 0);
		}

		_NODISCARD _CONSTEXPR20 iterator begin() noexcept
		{
			return iterator(_array);
		}

		_NODISCARD _CONSTEXPR20 iterator end() noexcept
		{
			return iterator(_array + _size);
		}

		_CONSTEXPR20 void clear() noexcept
		{
			// 이미 빈 상태
			if (_array == nullptr)
			{
				return;
			}

			// _array 안에 데이터들 날리기
			for (int i = 0; i < _size; ++i)
			{
				_array[i].~_Ty(); // 소멸자를 직접 호출
			}

			// _array 메모리 날리기
			free(_array);
			_array = nullptr;

			// 멤버 변수 날리기
			_size = 0;
			_capacity = 0;
		}

		_NODISCARD _CONSTEXPR20 _Ty& operator[](const size_t _pos) noexcept
		{
			return _array[_pos];
		}

		_CONSTEXPR20 void push_back(const _Ty& _val)
		{
			_Emplace_one_at_back(_val);
		}

		_CONSTEXPR20 void push_back(_Ty&& _val) // r-value들
		{
			_Emplace_one_at_back(move(_val));
		}

		template <class... _Valty>
		_CONSTEXPR20 decltype(auto) emplace_back(_Valty&&... _Val)
		{
			_Ty& _Result = _Emplace_one_at_back(std::forward<_Valty>(_Val)...);
			return _Result;
		}


		_CONSTEXPR20 void reserve(const size_t In_size)
		{
			// reserve(0) 즉, 날려버리기
			if (In_size == 0)
			{
				return;
			}

			// 이미 더 큰 공간을 갖고있을 때
			if (_size > In_size)
			{
				return;
			}

			reserve_impl(In_size);
		}

		_CONSTEXPR20 void resize(const size_t In_size)
		{
			// resize(0) 즉, 날려버리기
			if (In_size == 0)
			{
				clear();
				return;
			}

			// reserve() 실행
			reserve_impl(In_size);

			// 늘어난 메모리에 초기화 넣어주기
			const size_t Origin_size = _size;
			for (int i = Origin_size; i < In_size; ++i) // 원래 끝(Origin_size) 부터, 늘어난(In_size) 만큼
			{
				push_back({}); 
			}
		}

		_CONSTEXPR20 iterator erase(const iterator In_it) noexcept
		{
			// 삭제할 it 위치(포인터) 저장
			_Ty* Target_ptr = In_it._ptr;

			// 삭제할 위치가 유효한지 판단 
			if (Target_ptr < _array && array + size <= Target_ptr) // _array ~ array + size에 없다면
			{
				_ASSERT(false);
				return iterator(nullptr) ;
			}

			// 삭제할 포인터의 인덱스 계산
			size_t index = Target_ptr - _array;

			// 삭제할 포인터의 소멸자 호출
			_array[index].~_Ty();

			// 삭제된 곳부터 나머지들 당기기
			for (int i = index; i < _size - 1; ++i)
			{
				new(&_array[i]) _Ty(move(_array[i + 1])); // 한 칸 뒤에 것 당겨주고
				_array[i + 1].~_Ty(); // 당겨진 위치 비워주고

			}
			//FStruct& operator=(const FStruct&) = default;

			// 다 당기고 나면 원래의 끝 부분은 날려줘야지
			_array[_size - 1].~_Ty();

			// 바뀐 멤버 변수 저장
			--_size;

			// 삭제한 위치 반환
			return iterator(_array + index); //_array[index]라면 값을 주는 거라 iterator를 못씀 이렇게 위치를 줘야지 





		}



	protected: // 메서드의 호출 전용

		// 'reserve' 구현부
		void reserve_impl(size_t In_size)
		{
			// 메모리 증설
			const static size_t Min_size = 1;
			const size_t New_capacity = max(Min_size, In_size);
			const size_t New_memory = sizeof(_Ty) * (New_capacity + 1);  // 1칸 더 해줘야 end가 보임
			_Ty* New_array = reinterpret_cast<_Ty*>(malloc(New_memory)); // malloc : void*을 반환하니까 강하게 캐스팅

			// 기존의 데이터들 이전 준비
			const size_t Origin_size = _size; // 기존 데이터 수 저장
			_size = _size > New_capacity ? New_capacity : _size; // 더 작은 것을 기준으로
			
			// 메모리 할당 및 데이터 이전
			for (int i = 0; i < _size; ++i) 
			{
				new(New_array + i)_Ty(move(_array[i])); // placement new : 이미 할당된 메모리(New_array부터)에 생성자(이번에는 이동생성자)를 호출해줌
			}
			
			// 기존 데이터들 삭제
			for (int i = 0; i < Origin_size; ++i)
			{
				_array[i].~_Ty();
			}

			// 기존 메모리 해제
			if (_array)
			{
				free(_array);
				_array = nullptr;
					
			}

			// 바뀐 멤버 변수 저장
			_array = New_array;
			_capacity = New_capacity;
		}

		// 메모리 증설 여부 판단
		bool IsFull() const
		{
			return (_size == _capacity);
		}

private:
		// '데이터 추가' 구현부		
		template <class... _Valty>
		_CONSTEXPR20 _Ty& _Emplace_one_at_back(_Valty&&... _Val)
		{
			// 가득차면 메모리 증설
			if (IsFull())
			{
				reserve_impl(_size * 2);
			}
			// 기존의 데이터들 이전 준비
			const size_t Origin_size = _size; // 기존 데이터 수 저장

			// 메모리 할당 및 데이터 추가
			// 잘 모르겠다!
			new(_array + _size)_Ty(std::forward<_Valty>(_Val)...); // placement new : 이미 할당된 메모리(_array의 마지막 위치)에 생성자(forward가 뭔데)를 호출해줌
			
			// 바뀐 멤버 변수 저장
			++_size;

			// *(원래 맨 마지막 위치 = 추가해준 위치) 의 참조값
			return *(_array + Origin_size);
		}



	protected: // 데이터
		_Ty* _array = nullptr;	// 벡터 배열
		size_t _size = 0;		// 초기화 데이터 수
		size_t _capacity = 0;	// 초기화 캐퍼시티 크기			
	};
	//-------------------------------------------------------------------------
}