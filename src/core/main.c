#include <stdio.h>
#include <raylib.h>
#include "../../../EnergyGame/include/gameplay_screen.h"
#define N 6

char map1[N][N] = {
	{'#', '#', '#', '#', '#', '#'},
	{'#', 'e', 'e', 'e', 'e', '#'},
	{'#', 'e', 'e', '#', 'e', '#'},
	{'#', '#', 'e', 'e', 'e', '#'},
	{'#', 'e', 'e', '#', '#', '#'},
	{'#', '#', '#', '#', '#', '#'}
};

int main() {
    InitWindow(1000, 800, "EnergyGame");

    SetTargetFPS(120);
	while(!WindowShouldClose()) {
		BeginDrawing();

			ClearBackground(RAYWHITE);

			DrawGameplayScreen(map1);
			DrawMap(map1);

		EndDrawing();
    }
    return 0;
}