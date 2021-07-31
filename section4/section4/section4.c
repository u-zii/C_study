#include <stdio.h>

// �Լ�����
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

	//��ȯ���� ���� �Լ�
	function_without_return();

	//��ȯ���� �ִ� �Լ�
	int ret = function_with_return();
	p(ret);

	// �Ķ����(���ް�)�� ���� �Լ�
	function_without_parameters();

	//���ް��� �ִ� �Լ�
	function_with_parameters(1, 2, 3);

	//�Ķ����(���ް�)�� �ް�, ��ȯ���� �ִ� �Լ�
	int a = apple(5, 2);
	printf("��� %d���� ���ҽ��ϴ�.\n", a);

	// ���� �Լ�
	int num_ = 2;
	num_ = add(num_, 3);
	p(num_);

	return 0;
}

//��ȯ�� �Լ��̸�(���ް�) << �̷� �����̴�.
void p(int num)
{
	printf("num�� %d �Դϴ�.\n", num);
}


void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}

int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}

void function_without_parameters()
{
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}

void function_with_parameters(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ��Դϴ�. %d %d %d\n", num1, num2, num3);
}

int apple(int total, int ate)
{
	return total - ate;
}

int add(int num1, int num2)
{
	return num1 + num2;
}