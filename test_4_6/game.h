//声明
#pragma once
#define ROW 9
#define COL 9          //设置参数
#define EASY_COUNT 10  //雷的数量

#define ROWS ROW+2        //给参数加2
#define COLS COL+2   

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void InitBoard(char board[ROWS][COLS], int  rows, int cols,char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);   //展示
void SetMine(char board[ROWS][COLS], int row, int col);//布置雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int  row, int col);//扫雷