#include <string>

class BBB
{
private:
public:
    BBB();
    ~BBB();

    void show();
    void gotoxy(int x, int y);
    void clearScreen();

    void hideCursor();
    void showCursor();

    void print(int x, int y, std::string s);
};
