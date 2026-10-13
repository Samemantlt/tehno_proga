#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");

    double x, y;
    cout << "x = ";
    cin >> x;

    if (x <= 1)
        y = x * x * x;
    else if (x < 2)
        y = x * x + sqrt(x);
    else
        y = x + log(x);

    cout << "y = " << y << endl;

    return 0;
}
