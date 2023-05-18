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
		printf("��һ�ʤ��\n");
	}
	else if (ret == 'x')
	{
		printf("���Ի�ʤ��\n");
	}
	else
	{
		printf("ƽ�֡�\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}