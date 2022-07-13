#include <iostream>
#include <cstring>

using namespace std;

int main() {

    enum spectrum {
        red,orange,yellow,blue,violet,indigo
    };

    spectrum a = yellow;

    cout << a << endl;

    return 0;
}