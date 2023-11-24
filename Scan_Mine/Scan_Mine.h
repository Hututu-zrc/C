#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define IDI_ICON3

#define ROWS ROW+2
#define COLS COL+2
#define COUNT 8

void IntBoard(char Board[ROWS][COLS], int rows, int cols,char ret);
void DisplayBoard(char Board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);