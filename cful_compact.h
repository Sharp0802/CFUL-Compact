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

constexpr auto RESET		= "\033[0m";
constexpr auto BOLD			= "\033[1m";
constexpr auto DIM			= "\033[2m";
constexpr auto UNDERLINE	= "\033[4m";
constexpr auto BLINK		= "\033[5m";
constexpr auto INVERTED		= "\033[7m";
constexpr auto HIDDEN		= "\033[8m";

constexpr auto FOREGROUND	= "38";
constexpr auto BACKGROUND	= "48";

const inline void SET_COLOR(const char* type, const char r, const char g, const char b)
{
	printf("\033[%s;2;%d;%d;%dm", type, r, g, b);
}

void CFULcompact(void)
{
	printf("     ██████╗███████╗██╗   ██╗██╗                 \r\n");
	printf("    ██╔════╝██╔════╝██║   ██║██║                 \r\n");
	printf("    ██║     █████╗  ██║   ██║██║                 \r\n");
	printf("    ██║     ██╔══╝  ██║   ██║██║                 \r\n");
	printf("    ╚██████╗██║     ╚██████╔╝███████╗            \r\n");
	printf("╔═════╗╔═════╗╔═════╗╔═════╗╔═════╗╔═════╗╔═════╗\r\n");
	printf("║ ╔═══╝║ ╔═╗ ║║ ║ ║ ║║     ║║ ╔═╗ ║║ ╔═══╝╚═╗ ╔═╝\r\n");
	printf("║ ╚═══╗║ ╚═╝ ║║ ║ ║ ║║ ╔═══╝║ ║ ║ ║║ ╚═══╗  ║ ║  \r\n");
	printf("╚═════╝╚═════╝╚═╝═╝═╝╚═╝    ╚═╝ ╚═╝╚═════╝  ╚═╝  \r\n");
}

#endif
