#ifndef STRUCT
#define STRUCT
#include <iostream>

using namespace std;

struct MyStruct 
{
    string name;
    int age;
};

void display(MyStruct& temp){
    cout << "이름 : " << temp.name << endl;
    cout << "나이 : " << temp.age << endl;
}

#endif