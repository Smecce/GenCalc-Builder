#include <iostream>
#include "AAA/a.h"
#include "CALC/calc.h"

#ifdef _WIN32
#include <windows.h> // Обязательно для настройки консоли
#endif

using namespace std;

void enableANSIConsole();

int main()
{
	enableANSIConsole();

	// Отключаем буферизацию, чтобы текст выводился моментально
	std::ios_base::sync_with_stdio(false);

	cout << "Hi!" << endl;

	AAA a;
	a.show();
	a.b.show();

	a.b.clearScreen();
	a.b.gotoxy(30, 4);
	cout << "(3,4)";

	a.b.gotoxy(0, 20);

	Calc calc;
	calc.Enumerate(10);

	return 0;
}

// Функция для включения ANSI (работает только на Windows)
void enableANSIConsole()
{
#ifdef _WIN32
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	DWORD dwMode = 0;
	GetConsoleMode(hOut, &dwMode);
	dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
	SetConsoleMode(hOut, dwMode);

	// Устанавливаем кодовую страницу ввода (для cin, scanf и т.д.) в UTF-8
	SetConsoleCP(CP_UTF8);
	// Устанавливаем кодовую страницу вывода (для cout, printf и т.д.) в UTF-8
	SetConsoleOutputCP(CP_UTF8);

#endif
	// На Linux/macOS эта функция ничего не делает,
	// так как там ANSI поддерживается из коробки.
}