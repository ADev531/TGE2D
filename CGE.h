#pragma once

#include <Windows.h>
#include <conio.h>
#include <cstdio>

using namespace std;

// CGE
// Console GameEngine
// For windows

namespace CGE {
	HANDLE ConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD cursorpos = COORD();

	class CGE_Manager {
		public:
			CGE_Manager() {
				system("title CGE Game Window");
			}

			void PauseGame() {
				ClearScreen();
				
				system("pause");
			}

			void ClearScreen() {
				system("cls");
			}
	};

	CGE_Manager CGEConsole = CGE_Manager();

	class Size2D {
		public:
			int x = 0;
			int y = 0;

			Size2D(int sizex, int sizey) {
				x = sizex;
				y = sizey;
			}

			Size2D() {
				
			}
	};

	class Pos2D {
		public:
			int x;
			int y;

			Pos2D(int PosX, int PosY) {
				x = PosX;
				y = PosY;
			}

			Pos2D() {
				x = 0;
				y = 0;
			}
	};

	class CGERectangle {
		Size2D size = Size2D();
		Pos2D pos = Pos2D();

		public:

		CGERectangle(Size2D rectsize, Pos2D rectpos) {
			size = rectsize;
			pos = rectpos;
		}

		CGERectangle() {
			
		}

		void UpdateGraphic() {
			cursorpos.X = 0;
			cursorpos.Y = 0;
			SetConsoleCursorPosition(ConsoleHandle, cursorpos);

			for (int posY = 0; posY < pos.y; posY++) {
				printf("\n");
			}
			for (int y = 0; y < size.y; y++) {
				printf(" ");
				for (int x = 0; x < size.x; x++) {
					printf("*");
				}
				printf("\n");
			}
		}
	};
}