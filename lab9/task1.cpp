#include <iostream>
#include <cmath>

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

    int k = 0;
    for (int i = 0; i < n; i++) {
        if (abs(arr[i]) > 2)
            arr[k++] = arr[i];
    }
    for (int i = k; i < n; i++)
        arr[i] = 0;

    cout << "Сжатый массив:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete[] arr;

    return 0;
}
