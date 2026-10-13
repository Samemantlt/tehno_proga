#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");

    int r, c;
    cout << "Размер матрицы (строк и столбцов): ";
    cin >> r >> c;

    int a[50][50];
    cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    int row;
    cout << "Номер строки: ";
    cin >> row;
    int max_col = 0;
    for (int j = 1; j < c; j++) {
        if (a[row - 1][j] >= a[row - 1][max_col])
            max_col = j;
    }
    cout << "Номер столбца самого правого макс. элемента: " << max_col + 1 << endl;

    int col;
    cout << "Номер столбца: ";
    cin >> col;
    int min_row = 0;
    for (int i = 1; i < r; i++) {
        if (a[i][col - 1] <= a[min_row][col - 1])
            min_row = i;
    }
    cout << "Номер строки самого нижнего мин. элемента: " << min_row + 1 << endl;

    return 0;
}
