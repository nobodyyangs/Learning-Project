#define _CRT_SECURE_NO_WARNINGS 1
#include"game_21_5.h"

void menu()
{
	printf("*************************\n");
	printf("******    ɨ��     ******\n");
	printf("******   1.Play    ******\n");
	printf("******   0.Exit    ******\n");
	printf("*************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(mine, ROW, COL);
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
			printf("�˳���Ϸ��\n");
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