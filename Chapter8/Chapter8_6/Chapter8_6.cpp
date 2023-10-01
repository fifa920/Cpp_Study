#include <iostream>

// static 멤버 변수는 클래스에서 선언만 한다.(헤더파일)
class Something
{


public:
	static int m_value;

	
};

// 헤더파일이 아닌 .cpp 파일에서 초기화를 한다.
int Something::m_value = 1;

int main()
{
	std::cout << &Something::m_value << " " << Something::m_value << std::endl;

	Something st1;
	Something st2;

	st1.m_value = 2;



}