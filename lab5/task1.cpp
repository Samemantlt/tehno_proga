#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");

    int n;
    cout << "n = ";
    cin >> n;

    int arr[100];
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long prod = 1;
    bool has_nonzero = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            prod *= arr[i];
            has_nonzero = true;
        }
    }
    if (!has_nonzero)
        prod = 0;

    double sum = 0;
    int half = n / 2;
    for (int i = 0; i < half; i++)
        sum += arr[i];

    cout << "Произведение ненулевых элементов: " << prod << endl;
    if (half > 0)
        cout << "Среднее арифметическое первой половины: " << sum / half << endl;

    return 0;
}
