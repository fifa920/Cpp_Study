#include <iostream>

// static ��� ������ Ŭ�������� ���� �Ѵ�.(�������)
class Something
{


public:
	static int m_value;

	
};

// ��������� �ƴ� .cpp ���Ͽ��� �ʱ�ȭ�� �Ѵ�.
int Something::m_value = 1;

int main()
{
	std::cout << &Something::m_value << " " << Something::m_value << std::endl;

	Something st1;
	Something st2;

	st1.m_value = 2;



}