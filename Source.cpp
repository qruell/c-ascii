#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

    cout << "U lukomor'a dub zelenij," << endl;
    cout << "Zlataya zep na dupe tom," << endl;
    cout << "I dnem i nochju kot uchenij" << endl;
    cout << "vse hodit po cepi krugom" << endl;

    return 0;
}
