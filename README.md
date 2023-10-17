# Cpp_Study
홍정모의 C++스터디



### 8.12 친구 함수와 클래스 friend

다른 함수에서 private에 있는 멤버변수를 가져다 쓰려고 할 때, `private`  안에다가 friend 를 활용하여 함수의 선언을 한다.



```c++
class A
{
private:
	int m_value = 1;

	friend void doSomething(A& a);
};

void doSomething(A& a)
{
	std::cout << a.m_value << std::endl;
}
```

