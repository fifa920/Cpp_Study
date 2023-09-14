// Chapter8.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:


    // 생성자는 construction 될 떄, 자동호출된다.
    // 생성자는 public으로 만들어야 한다(특별한 경우만 private으로)
    Fraction(const int &num_in, const int &den_in)
    {
        m_numerator = num_in;
        m_denominator = den_in;

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
    //Fraction frac;
    Fraction one_third(1, 3);
    one_third.print();
}

