#include <iostream>

// 소멸자는 parameter가 없다
// memory leak를 걱정이 되면 vector와 같은 container 사용하면 된다.

class IntArray
{
private:
	int* m_arr = nullptr;
	int m_length = 0;

public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];
	}

	~IntArray()
	{
		delete m_arr;
	}
	int size()
	{
		return m_length;
	}
};

int main()
{
	while (true)
	{
		IntArray my_int_arr(10000);
		
	}
	return 0;
}