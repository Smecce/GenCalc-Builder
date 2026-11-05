#include <iostream>
#include "AAA/a.h"
#include "CALC/calc.h"
#include <windows.h> // Обязательно для настройки консоли

using namespace std;

int main()
{
// Принудительно включаем UTF-8 в консоли Windows (решает проблему с кракозябрами)
    SetConsoleOutputCP(CP_UTF8);
    // Отключаем буферизацию, чтобы текст выводился моментально
    std::ios_base::sync_with_stdio(false);






    cout << "Hi!" << endl;

    AAA a;
    a.show();
    a.b.show();
    

    a.b.clearScreen();
    a.b.gotoxy(30,4);
    cout<<"(3,4)";
    
    
    a.b.gotoxy(0,20);
    
    

    Calc calc;
    calc.Enumerate(10);
    
    
    
    
    return 0;
}
