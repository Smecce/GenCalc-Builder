#include <iostream>
#include <string>
#include "AAA\BBB\b.h"
using namespace std;

BBB::BBB(/* args */)
{
}

BBB::~BBB()
{
}

void BBB::show()
{
    string s = "Привет Alex!!";
    cout << "Привет BBBB" << s << endl;
}

// x - столбец, y - строка
void BBB::gotoxy(int x, int y)
{
    // \x1b[Y;XH перемещает курсор в строку Y и столбец X
    std::cout << "\x1b[" << y << ";" << x << "H";
}

void BBB::clearScreen()
{
    // \x1b[2J — очищает экран
    // \x1b[3J — очищает историю прокрутки (чтобы нельзя было отлистать назад)
    // \x1b[1;1H — ставит курсор в левый верхний угол (1,1)
    std::cout << "\x1b[2J\x1b[3J\x1b[1;1H";
}

void BBB::print(int x, int y, string s)
{

    gotoxy(x, y);
    std::cout << s;
}

void BBB::hideCursor()
{
    // l = lower (скрыть)
    std::cout << "\x1b[?25l";
}

void BBB::showCursor()
{
    // h = higher (показать)
    std::cout << "\x1b[?25h";
}