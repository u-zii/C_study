#include <stdio.h>
#include <time.h>

int main()
{
	// if (조건){...} else{...}
	int age = 15;
	if (age >= 20) {
		printf("일반인 입니다.\n");
	}
	else {
		printf("학생입니다.\n");
	}

	int age_ = 8;
	if (age_ >= 8 && age_ <= 13)
	{
		printf("초등학생입니다.\n");
	}
	else if (age_ >= 14 && age_ <= 16)
	{
		printf("중학생입니다.\n");
	}
	else if (age_ >= 17 && age_ <= 19)
	{
		printf("고등학생입니다.\n");
	}
	else
	{
		printf("성인입니다.\n");
	}

	//break/continue
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에가세요\n");
			break;
		}
		printf("%d번 학생은 조별발표 준비를 하세요.\n", i);
	}

	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i<=10)
		{
			if (i == 7)
			{
				printf("%d번 학생은 결석입니다.\n", i);
				continue;
			}
			printf("%d번 학생은 조별발표 준비를 하세요.\n", i);
		}	
	}

	//가위바위보
	srand(time(NULL));
	int i = rand() % 3;//0~2사이 값 반환
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}

	switch (i)//break를 안쓰면 맞는 case뒤에꺼가 무조건 다 실행된다.
	{
	case 0:printf("가위\n");
		break;
	case 1:printf("바위\n");
		break;
	case 2:printf("보\n");
		break;
	default:printf("몰라요\n");
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
	case 13: printf("초등학생입니다.\n");
		break;
	case 14:
	case 15:
	case 16:printf("중학생입니다.\n");
		break;
	case 17:
	case 18:
	case 19: printf("고등학생입니다.\n");
		break;
	default: printf("학생이 아닙니다.\n");
		break;
	}
	return 0;
}