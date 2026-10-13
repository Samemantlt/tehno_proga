#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");

    double a = 2.5;
    double dx = 0.5;
    double w;

    cout << "x\tw" << endl;

    for (double x = 1.0; x <= 5.0; x += dx) {
        if (x > a)
            w = x * sqrt(abs(x - a));
        else if (x == a)
            w = x * log(a * x);
        else
            w = a * x * x;

        cout << x << "\t" << w << endl;
    }

    return 0;
}
