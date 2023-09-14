// Chapter8.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction()
    {
        m_numerator = 1;
        m_denominator = 1;

        std::cout << "Fraction() COnstructor" << std::endl;
    }
    
    void print()
    {
        std::cout << m_numerator << "/ " << m_denominator << std::endl;
    }
};

int main()
{
    // 생성자의 parameter가 없을 때는 frac으로 선언하고
    // 생성사의 parameter가 있을 떄는 frac() 으로 처리한다.
    Fraction frac;
    frac.print();
}

