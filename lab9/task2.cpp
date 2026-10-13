#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");

    int n;
    cout << "Размер квадратной матрицы: ";
    cin >> n;

    int **a = new int*[n];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];

    cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++) {
        bool only_neg = true;
        for (int j = 0; j < n; j++) {
            if (a[i][j] >= 0) {
                only_neg = false;
                break;
            }
        }

        if (only_neg) {
            for (int k = 1; k < n; k++) {
                int buf = a[i][k];
                int j = k - 1;
                while (j >= 0 && a[i][j] > buf) {
                    a[i][j + 1] = a[i][j];
                    j--;
                }
                a[i][j + 1] = buf;
            }
        }
    }

    cout << "Преобразованная матрица:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }

    for (int i = 0; i < n; i++)
        delete[] a[i];
    delete[] a;

    return 0;
}
