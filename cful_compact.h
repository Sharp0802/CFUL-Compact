/*
	 ██████╗███████╗██╗   ██╗██╗     
	██╔════╝██╔════╝██║   ██║██║      ╔═════╗╔═════╗╔═════╗╔═════╗╔═════╗╔═════╗╔═════╗ 
	██║     █████╗  ██║   ██║██║      ║ ╔═══╝║ ╔═╗ ║║ ║ ║ ║║     ║║ ╔═╗ ║║ ╔═══╝╚═╗ ╔═╝
	██║     ██╔══╝  ██║   ██║██║      ║ ╚═══╗║ ╚═╝ ║║ ║ ║ ║║ ╔═══╝║ ║ ║ ║║ ╚═══╗  ║ ║
	╚██████╗██║     ╚██████╔╝███████╗ ╚═════╝╚═════╝╚═╝═╝═╝╚═╝    ╚═╝ ╚═╝╚═════╝  ╚═╝
*/

#ifndef CFUL_H
#define CFUL_H

#include <stdio.h>

#define RESET		"\033[0m"
#define BOLD		"\033[1m"
#define DIM			"\033[2m"
#define UNDERLINE	"\033[4m"
#define BLINK		"\033[5m"
#define INVERTED	"\033[7m"
#define HIDDEN		"\033[8m"

#define FOREGROUND	"38"
#define BACKGROUND	"48"

#define SET_COLOR(type, r, g, b) printf("\033[%s;2;%d;%d;%dm", type, r, g, b);

#endif // CFUL_H
