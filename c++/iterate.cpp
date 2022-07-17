#include <iostream>

int main() {

    using namespace std;

    int a[5] = {1,3,5,7,9};

    for (int i=0; i<5; i++)
    {
        cout << a[i];
    }
    cout << "\n";

    for (int i : a){
        cout << i;
    }

    return 0;
}