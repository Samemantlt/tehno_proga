#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");

    int n;
    cout << "Размер массива: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int *b = new int[n];
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 5)
            b[k++] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] <= 5)
            b[k++] = arr[i];
    }
    for (int i = 0; i < n; i++)
        arr[i] = b[i];

    cout << "Преобразованный массив:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete[] b;
    delete[] arr;

    return 0;
}
