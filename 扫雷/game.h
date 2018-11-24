#define _CRT_SECURE_NO_WARNINGS 
#ifndef __GAME_H__
#define __GAME_H__

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

#define ROW 9//�������̴�С
#define COL 9

#define ROWS ROW+2 
#define COLS COL+2
#define EASY_COUNT 10

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char arr[ROWS][COLS], int row, int col);
void SetMine(char arr[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);
int GetMineCount(char mine[ROWS][COLS], int x, int y);

#endif //__GAME_H__