//实现声明
#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void InitBoard(char board[ROWS][COLS], int  rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++)

	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);

		}
		printf("\n");
	}
	printf("\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	printf("布置雷：>\n");
	int count = EASY_COUNT;   //定义类的数量
	while (count)
	{
		int x = rand() % row + 1;   //1--9
		int y = rand() % col + 1;  
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}


int get_minr_count(char mine[ROWS][COLS], int x, int y)
{
									//'1'-'0'='1'    '3'-'0'='3'   '0'-'0'=0
		return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}



void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int  row, int col) //扫雷
{
	int x = 0;
	int y = 0;
	int win = 0; //9*9-10=71
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入排查雷的坐标：>");
		scanf_s("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//合法   1、踩雷  2、计算x y坐标周围几个雷
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = get_minr_count(mine, x, y);  //计算周围几个雷
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你排雷成功\n");
		DisplayBoard(mine, row, col);
	}


	//展开展开时周围坐标不是雷
	//展开时递归
}