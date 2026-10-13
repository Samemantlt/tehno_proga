#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");
    srand(time(0));

    const int n = 7;
    int a[n][n];

    cout << "Матрица 7x7:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 100;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nМаска 7x7:\n";
    int min_val = a[0][6];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 6 || j == 3 + abs(i - 3)) {
                cout << a[i][j] << "\t";
                if (a[i][j] < min_val)
                    min_val = a[i][j];
            } else {
                cout << "0\t";
            }
        }
        cout << "\n";
    }

    cout << "Наименьший элемент среди отмеченных: " << min_val << endl;

    return 0;
}
