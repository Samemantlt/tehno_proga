#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");

    char c;
    cout << "Введите символ: ";
    cin >> c;

    switch (c) {
    case 'A':
        cout << 'a' << endl;
        break;
    case 'B':
        cout << 'b' << endl;
        break;
    case 'C':
        cout << 'c' << endl;
        break;
    case 'D':
        cout << 'd' << endl;
        break;
    case 'E':
        cout << 'e' << endl;
        break;
    case 'F':
        cout << 'f' << endl;
        break;
    default:
        cout << "Ошибка!" << endl;
        break;
    }

    return 0;
}
