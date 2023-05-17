#define _CRT_SECURE_NO_WARNINGS 1
#include"test_game_17_5.h"

void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
}
void menu()
{
	printf("**************************\n");
	printf("****  1.Play  0.Exit  ****\n");
	printf("**************************\n");
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误，请重新选择。\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}