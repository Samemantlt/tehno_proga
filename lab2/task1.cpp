#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");

    double start, end, tariff;
    cout << "Начальные показания: ";
    cin >> start;
    cout << "Конечные показания: ";
    cin >> end;
    cout << "Тариф: ";
    cin >> tariff;
    double cost = (end - start) * tariff;
    cout << "Сумма к оплате: " << cost << endl;

    return 0;
}

