#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");

    int n;
    cout << "Введите двузначное число: ";
    cin >> n;
    int d1 = n / 10;
    int d2 = n % 10;
    int res = (d1 * d2) * (d1 * d2);
    cout << "Квадрат произведения цифр: " << res << endl;

    return 0;
}

