#include <stdio.h>
int main()
{

	// for��
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",i);
	}

	//while ��
	int j = 0;
	while (j < 10)
	{
		printf("hello world %d\n", j);
		j++;
	}

	//do while��
	int k = 10;
	do {
		printf("hello world %d\n", k++);
	} while (k < 20);

	//2�� �ݺ���
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i,j,i*j);
		}
	}

	return 0;
}