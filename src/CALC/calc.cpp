#include "CALC/calc.h"
#include "AAA/BBB/b.h"
#include <sstream>

Calc::Calc(/* args */)
{
}

Calc::~Calc()
{
}

void Calc::Enumerate(int n)
{
	BBB b;

	b.hideCursor();
	b.clearScreen();

	b.print(100, 5, "=== Счётчик ===");
	b.print(100, 6, "Значение: 0");
	b.print(100, 7, "Статус: работает");
	std::cout.flush(); // Принудительно сбрасываем буфер, чтобы текст появился сразу

	std::ostringstream oss;
	for (int i = 1; i <= n; ++i)
	{
		// Ждём полсекунды для наглядности
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));

		// Очищаем перед каждым использованием
		oss.str("");
		oss.clear();

		oss << "Значение: " << i << "       ";
		b.print(100, 6, oss.str());

		std::cout.flush();
	}

	// В конце можно вывести что-то ещё, чтобы завершить
	std::cout << "Готово!\n";

	b.gotoxy(0, 10);
	b.showCursor();
}
