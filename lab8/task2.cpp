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

    for (int j = 0; j < n; j++) {
        bool has_neg = false;
        for (int i = 0; i < n; i++) {
            if (a[i][j] < 0) {
                has_neg = true;
                break;
            }
        }

        if (has_neg) {
            for (int i = 0; i < n - 1; i++) {
                int max_i = i;
                for (int k = i + 1; k < n; k++) {
                    if (a[k][j] > a[max_i][j])
                        max_i = k;
                }
                int temp = a[i][j];
                a[i][j] = a[max_i][j];
                a[max_i][j] = temp;
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
