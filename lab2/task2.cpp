#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");

    double x;
    cout << "x = ";
    cin >> x;
    double y = tan(7 * x);
    cout << "y = " << y << endl;

    return 0;
}

