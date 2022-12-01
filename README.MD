# CGE
The Console GameEngine, CGE

Currently Support {
  C++, Windows
}

# Example

![cge_example](https://user-images.githubusercontent.com/82761748/205040383-248426ea-9ab1-46d5-9b00-1bd33bc1ffd7.png)

# Example Code

#include "CGE.h"

using namespace CGE;

int main() {
	CGERectangle rect = CGERectangle(Size2D(7, 5), Pos2D(1, 1));
	CGERectangle rect2 = CGERectangle(Size2D(5, 5), Pos2D(8, 7));
	
	COORD textpos = COORD();
	textpos.X = 8;
	textpos.Y = 10;

	while (true) {
		CGEConsole.ClearScreen();
		rect.UpdateGraphic();
		rect2.UpdateGraphic();
		SetConsoleCursorPosition(ConsoleHandle, textpos);
		printf("hello world");
	}

	return 0;
}
