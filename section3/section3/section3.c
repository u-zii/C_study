#include <stdio.h>
#include <time.h>

int main()
{
	// if (����){...} else{...}
	int age = 15;
	if (age >= 20) {
		printf("�Ϲ��� �Դϴ�.\n");
	}
	else {
		printf("�л��Դϴ�.\n");
	}

	int age_ = 8;
	if (age_ >= 8 && age_ <= 13)
	{
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age_ >= 14 && age_ <= 16)
	{
		printf("���л��Դϴ�.\n");
	}
	else if (age_ >= 17 && age_ <= 19)
	{
		printf("����л��Դϴ�.\n");
	}
	else
	{
		printf("�����Դϴ�.\n");
	}

	//break/continue
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("������ �л��� ����������\n");
			break;
		}
		printf("%d�� �л��� ������ǥ �غ� �ϼ���.\n", i);
	}

	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i<=10)
		{
			if (i == 7)
			{
				printf("%d�� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}
			printf("%d�� �л��� ������ǥ �غ� �ϼ���.\n", i);
		}	
	}

	//����������
	srand(time(NULL));
	int i = rand() % 3;//0~2���� �� ��ȯ
	if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else if (i == 2)
	{
		printf("��\n");
	}

	switch (i)//break�� �Ⱦ��� �´� case�ڿ����� ������ �� ����ȴ�.
	{
	case 0:printf("����\n");
		break;
	case 1:printf("����\n");
		break;
	case 2:printf("��\n");
		break;
	default:printf("�����\n");
		break;
	}

	int age1 = 15;
	switch (age1)
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13: printf("�ʵ��л��Դϴ�.\n");
		break;
	case 14:
	case 15:
	case 16:printf("���л��Դϴ�.\n");
		break;
	case 17:
	case 18:
	case 19: printf("����л��Դϴ�.\n");
		break;
	default: printf("�л��� �ƴմϴ�.\n");
		break;
	}
	return 0;
}