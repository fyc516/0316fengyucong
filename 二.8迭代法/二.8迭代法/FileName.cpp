#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, x_n, x_n_plus_1;
    cout << "������һ����a: ";
    cin >> a;

    x_n = a;
    do {
        x_n_plus_1 = 0.5 * (x_n + a / x_n);
        if (fabs(x_n_plus_1 - x_n) < 1e-5) break;
        x_n = x_n_plus_1;
    } while (true);

    cout << "ƽ����Ϊ: " << x_n_plus_1 << endl;

    return 0;
}