﻿#include <stdio.h>
#include <time.h>

int main_condition(void)
{
	//버스를 탄다고 가정. 학생 / 일반인으로 구분 (일반인 : 20세)
	 /* int age = 25;
	// if (조건) {   }   else {    }
	if (age >= 20)
	{
		printf("일반인입니다\n");
	}
	else
	{
		printf("학생입니다\n");
	} */

	// 초등학생(8~13세) / 중학생(14~16세) / 고등학생(17~19세)로 나누면?
	//if / else if /  else 
	/* int age = 89;
	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생입니다\n");
	}
	else
	{
		printf("학생이 아닙니다\n");
	} */


	// break / continue
	// 1번부터 30번까지 있는 반에서 1번~5번까지 조별 발표를 합니다
	/* for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집으로 가세요\n");
			break;
		}
		printf("%d번 학생은 조별 발표 준비를 하십시오\n", i);
	} */

	// 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	// 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요.
	/* for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d번 학생은 결석입니다\n", i);
				continue;
			}
			printf("%d번 학생은 조별 발표 준비를 하십시오\n", i);

		}
	} */

	// && ||
	/* int a = 10;
	int b = 11;
	int c = 13;
	int d = 13;
	if (a == b || c == d)
	{
		printf("a와 b, 혹은  c와 d의 값이 같습니다\n");
	}
	else
	{
		printf("값이 서로 다릅니다\n");
	} */

	// 가위 0 바위 1  보 2
	/* srand(time(NULL));
	int i = rand() % 3; //0 - 2  반환
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
	else
	{
		printf("잘못된 값입니다\n");
	} */

	/* srand(time(NULL));
	int i = rand() % 3; //0 - 2  반환
	switch (i)
	{
	case 0: printf("가위\n"); break;
	case 1: printf("바위\n"); break;
	case 2: printf("보\n"); break;
	default:printf("몰라요\n"); break;
	} */

	// Up and Down
	/* srand(time(NULL));
	int num = rand() % 100 + 1; // 1 - 100사이의 숫자
	printf("숫자 : %d\n", num);
	int answer = 0; //정답
	int chance = 5; //기회
	while (1) // 1은 참, 0은 거짓
	{
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞춰보세요 (1-100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN ↓\n\n");
		}
		else if (answer < num)
		{
			printf("UP ↑\n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다 !\n\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류\n\n");
		}
		if (chance == 0)
		{
			printf("모든 기회를 소진했습니다\n\n");
			break;
		}
	} */

	return 0;
}