#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    if (a == 0 && b < 45)
    {
        a = 23;
        b = 60 + (b - 45);
    }

    else if (a != 0 && b < 45)
    {
        a = a - 1;
        b = 60 + (b - 45);
    }

    else {
        b = b - 45;
    }

    cout << a << " " << b << endl;
    return 0;
}