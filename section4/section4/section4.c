#include <stdio.h>

// 함수선언
void p(int num);
void function_without_return();
int function_with_return();
void function_without_parameters();
void function_with_parameters(int num1, int num2, int num3);
int apple(int total, int ate);
int add(int num1, int num2);

int main()
{
	int num = 2;
	p(num);

	//반환값이 없는 함수
	function_without_return();

	//반환값이 있는 함수
	int ret = function_with_return();
	p(ret);

	// 파라미터(전달값)가 없는 함수
	function_without_parameters();

	//전달값이 있는 함수
	function_with_parameters(1, 2, 3);

	//파라미터(전달값)도 받고, 반환값이 있는 함수
	int a = apple(5, 2);
	printf("사과 %d개가 남았습니다.\n", a);

	// 계산기 함수
	int num_ = 2;
	num_ = add(num_, 3);
	p(num_);

	return 0;
}

//반환형 함수이름(전달값) << 이런 형식이다.
void p(int num)
{
	printf("num은 %d 입니다.\n", num);
}


void function_without_return()
{
	printf("반환값이 없는 함수입니다.\n");
}

int function_with_return()
{
	printf("반환값이 있는 함수입니다.\n");
	return 10;
}

void function_without_parameters()
{
	printf("전달값이 없는 함수입니다.\n");
}

void function_with_parameters(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수입니다. %d %d %d\n", num1, num2, num3);
}

int apple(int total, int ate)
{
	return total - ate;
}

int add(int num1, int num2)
{
	return num1 + num2;
}