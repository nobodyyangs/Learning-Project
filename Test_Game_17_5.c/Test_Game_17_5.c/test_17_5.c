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