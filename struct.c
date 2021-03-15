#include <stdio.h>

struct Gameinfo {
	char* name;
	int year;
	int price;
	char* company;

	struct Gameinfo* friendGame; // 연관 업체 게임
};

typedef struct  {
	char* name;
	int year;
	int price;
	char* company;

	struct Gameinfo* friendGame; // 연관 업체 게임
} GAME_INFO;

int main_struct(void)
{
	// [ 게임 출시 ]
	// 이름: 나도게임
	// 발매년도 : 2021년
	// 가격: 50원
	/// 제작사 : 나도회사

	char* name = "나도게임";
	int year = 2021;
	int price = 50;
	char* company = "나도회사";

	// [ 또다른 게임 출시 ]
	// 이름: 너도게임
	// 발매년도 : 2021년
	// 가격: 500원
	/// 제작사 : 너도회사

	char* name2 = "너도게임";
	int year2 = 2021;
	int price2 = 500;
	char* company2 = "너도회사";

	// 구조체 사용
	struct Gameinfo gameinfo1;
	//struct Gameinfo gameinfo2;
	gameinfo1.name = "나도게임";
	gameinfo1.year = 2021;
	gameinfo1.price = 50;
	gameinfo1.company = "나도회사";

	// 구조체 출력
	printf("-- 게임 출시 정보 --\n");
	printf("  게임명    : %s\n", gameinfo1.name);
	printf("  발매년도  : %d\n", gameinfo1.year);
	printf("  가격      : %d\n", gameinfo1.price);
	printf("  제작사    : %s\n", gameinfo1.company);

	// 구조체 배열처럼 초기화
	struct Gameinfo gameinfo2 = { "너도게임", 2021, 500, "너도회사" };
	printf("\n\n-- 또다른 게임 출시 정보 --\n");
	printf("  게임명    : %s\n", gameinfo2.name);
	printf("  발매년도  : %d\n", gameinfo2.year);
	printf("  가격      : %d\n", gameinfo2.price);
	printf("  제작사    : %s\n", gameinfo2.company);
	
	// 구조체 배열
	struct Gameinfo gameArray[2] = {
	{ "나도게임", 2021, 50, "나도회사" } ,
	{ "너도게임", 2021, 500, "너도회사" }
	};

	// 구조체 포인터
	struct Gameinfo* gamePtr; // 미션맨 
	gamePtr = &gameinfo1;
	/* printf("\n\n-- 미션맨의 게임 출시 정보 --\n");
	printf("  게임명    : %s\n", (*gamePtr).name); // *ptr
	printf("  발매년도  : %d\n", (*gamePtr).year);
	printf("  가격      : %d\n", (*gamePtr).price);
	printf("  제작사    : %s\n", (*gamePtr).company); */

	printf("\n\n-- 미션맨의 게임 출시 정보 --\n");
	printf("  게임명    : %s\n", gamePtr->name); 
	printf("  발매년도  : %d\n", gamePtr->year);
	printf("  가격      : %d\n", gamePtr->price);
	printf("  제작사    : %s\n", gamePtr->company);

	// 연관 업체 게임 소개
	gameinfo1.friendGame = &gameinfo2;
	printf("\n\n-- 연관 업체의 게임 출시 정보 --\n");
	printf("  게임명    : %s\n", gameinfo1.friendGame->name);
	printf("  발매년도  : %d\n", gameinfo1.friendGame->year);
	printf("  가격      : %d\n", gameinfo1.friendGame->price);
	printf("  제작사    : %s\n", gameinfo1.friendGame->company);

	// typedef
	// 자료형에 별명 지정
	int i = 1; 
	typedef int 정수;
	typedef float 실수;
	정수 정수변수 = 3; // int i = 3;
	실수 실수변수 = 3.23f; // float f = 3.23f;
	printf("\n\n정수변수 : %d , 실수변수 %.2f\n\n", 정수변수, 실수변수);

	typedef struct Gameinfo 게임정보;
	게임정보 game1;
	game1.name = "한글게임";
	game1.year = 2025;

	GAME_INFO game2;
	game2.name = "한글게임2";
	game2.year = 2024;

	

	return 0;
}	