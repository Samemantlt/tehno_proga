#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");

    const int r = 5, c = 6;
    int d[r][c];

    cout << "Введите элементы матрицы 5x6:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> d[i][j];

    long long prod = 1;
    for (int i = 0; i < r; i += 2) {
        for (int j = 0; j < c; j += 2) {
            prod *= d[i][j];
        }
    }

    cout << "Произведение элементов с четными индексами: " << prod << endl;

    return 0;
}
