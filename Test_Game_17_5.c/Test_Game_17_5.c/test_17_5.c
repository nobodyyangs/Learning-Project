#define _CRT_SECURE_NO_WARNINGS 1
#include"test_game_17_5.h"

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = WhoWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = WhoWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == 'o')
	{
		printf("玩家获胜。\n");
	}
	else if (ret == 'x')
	{
		printf("电脑获胜。\n");
	}
	else
	{
		printf("平局。\n");
	}
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
	srand((unsigned int)time(NULL));
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