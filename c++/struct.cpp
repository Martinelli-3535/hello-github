#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    struct MyStruct
    {
        string name;
        string position;
        int height;
        int weight;
    };

    MyStruct A;
    A.name = "Son";
    A.position = "Striker";
    A.height = 183;
    A.weight = 77;

    MyStruct B = {
        "Saka",
        "Winger",
        180,
        70
    };

    cout << A.name << endl;
    cout << A.position << endl;
    cout << A.height << endl;
    cout << A.weight << endl; 

    cout << B.name << endl;


    return 0;
}
