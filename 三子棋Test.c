#include"game.h"
void menu()
{
	printf("******************************************\n");
	printf("********** 1.play ****** 0.exit **********\n");
	printf("******************************************\n");
}
void game()
{
	char ret=0;
	char board[ROW][COL]={0};
	InitBoard(board,ROW,COL);
	DisplayBoard(board,ROW,COL);
	printf("请输入要下位置的坐标:>");
	printf("例：1空格1\n"); 
	while(1)
	{
		PlayerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		ret=IsWin(board,ROW,COL);
		if(ret!='c')
		{
			break;
		}
		ComputerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		ret=IsWin(board,ROW,COL);
		if(ret!='c')
		{
			break;
		}
	}
	if(ret=='o')
	{
		printf("玩家赢！\n");
	}
	else if(ret=='x')
	{
		printf("电脑赢！\n");
	}
	else
	{
		printf("平局！\n");
	}
}
void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择有误，请重新输入！\n");
				break;
		}
	}while(input);
}
int main()
{
	test();
	return 0;
}
