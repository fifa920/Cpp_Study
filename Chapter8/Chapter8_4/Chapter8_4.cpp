#include <iostream>

// Initalize List

class B
{
private:
	int m_b;

public:
	// 생성자 초기화 함수에는 {} 가 꼭 들어가야 한다.
	B(const int& m_b_in)
		: m_b(m_b_in)
	{

	}
};



class Something
{
private:
	int m_i;
	double m_d;
	char m_c;
	int m_arr[5];
	B m_b;

public:
	Something()
		: m_i{ 1 }, m_d{3.14}, m_c{'a'}, m_arr{1,2,3,4,5}, m_b{m_i+1}
	{
		
	}

	void print()
	{
		std::cout << m_i << " " << m_d << " " << m_c << " " << std::endl;
		for (auto& e : m_arr)
		{
			std::cout << e << " ";
		}
		std::cout << std::endl;
	}
};

int main()
{
	Something som;
	som.print();
}