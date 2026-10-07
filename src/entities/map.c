#include <raylib.h>
#include "../../include/map.h"
#define N 6

int tile = 50;

void DrawMap(char map[N][N]) {
	int startX = 100;
	int startY = 100;
	int currentX = startX;
	int currentY = startY;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			switch (map[i][j]) {
			case '#':
				DrawRectangle(currentX, currentY, tile, tile, BLUE);
				break;
			}
			currentX += tile;
		}
		currentX = startX;
		currentY += tile;
	}
}