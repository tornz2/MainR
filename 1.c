	#include <stdio.h>
	#include <locale.h>
	
void name() {
	setlocale(LC_CTYPE, ".UTF-8");

	puts("*******************************************");
	puts("*                                         *");
	puts("* тема: Разработка консольного приложения *");
	puts("*    Выполнил Бурыкин А.А.                *");
	puts("*                                         *");
	puts("*******************************************");
}


void date() {
	setlocale(LC_CTYPE, ".UTF-8");

	puts("_  _   _  _   _  _");
	puts("_|| | | | _| | ||_|");
	puts("_||_|.|_| _|.|_||_|");
}


int main() {
	setlocale(LC_CTYPE, ".UTF-8");

	puts("Нажмите Enter для продолжения...");
	getchar();

	name();
	date();

	return 0;
}