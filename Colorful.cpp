#include "Colorful.h"

#ifdef linux
	void Colorful::SetColor(int attr, int fg, int bg){
	    char command[13];
	    sprintf(command, "%c[%d;%d;%dm", 0x1B, attr, fg + 30, bg + 40);
	    printf("%s", command);
	}
#endif

#ifdef WIN32
	#define _DEFAULT FOREGROUND_INTENSITY
	#define _WHITE FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE
	#define _RED FOREGROUND_INTENSITY | FOREGROUND_RED
	#define _GREEN FOREGROUND_INTENSITY | FOREGROUND_GREEN
	#define _BLUE FOREGROUND_INTENSITY | FOREGROUND_BLUE
	#define _YELLOW FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN
	#define _PINK FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE
	#define _CYAN FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE
	void Colorful::SetColor(int color){
		switch(color){
			case COLOR_WIN_DEFAULT:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _DEFAULT);break;
			case COLOR_WIN_WHITE:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _WHITE);break;
			case COLOR_WIN_RED:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _RED);break;
			case COLOR_WIN_GREEN:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _GREEN);break;
			case COLOR_WIN_BLUE:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _BLUE);break;
			case COLOR_WIN_YELLOW:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _YELLOW);break;
			case COLOR_WIN_PINK:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _PINK);break;
			case COLOR_WIN_CYAN:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _CYAN);break;
		}
	}
#endif
