#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#ifdef WIN32
	#include <windows.h>
#endif

class Colorful{
	private:
		#ifdef linux
			enum attr{
				ATTR_LINUX_RESET,
				ATTR_LINUX_BRIGHT,
				ATTR_LINUX_DIM,
				ATTR_LINUX_UNDERLINE,
				ATTR_LINUX_BLINK,
				ATTR_LINUX_REVERSE,
				ATTR_LINUX_HIDDEN
			};
			enum color{
				COLOR_LINUX_BLACK,
				COLOR_LINUX_RED,
				COLOR_LINUX_GREEN,
				COLOR_LINUX_YELLOW,
				COLOR_LINUX_BLUE,
				COLOR_LINUX_MAGENTA,
				COLOR_LINUX_CYAN,
				COLOR_LINUX_WHITE
			};
		#endif
		#ifdef WIN32
			enum color{
				COLOR_WIN_DEFAULT,
				COLOR_WIN_WHITE,
				COLOR_WIN_RED,
				COLOR_WIN_GREEN,
				COLOR_WIN_BLUE,
				COLOR_WIN_YELLOW,
				COLOR_WIN_PINK,
				COLOR_WIN_CYAN
			};
		#endif
	public:
		#ifdef linux
			void SetColor(int attr, int fg, int bg);
		#endif
		#ifdef WIN32
			void SetColor(int color); 
		#endif
};
