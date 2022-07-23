#include <iostream>

using namespace std;

const int SIZE = 8;

int sumArr(int*, int);
//int sumArr(int*, int*);

int main(){

    int arr[SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};
    // arr == &arr[0]
    int sum = sumArr(arr, SIZE);
    cout << "함수의 " << SIZE << "까지의 합은 " << sum << "입니다.\n";

    sum = sumArr(arr, 3);
    //sum = sumArr(arr, arr+3);
    cout << "함수의 " << "세번째 인덱스 까지의 합은 " << sum << "입니다.\n";

    return 0
}

int sumArr(int* begin, int* end){
    int total = 0;

    for (int i = 0; i < n; i++)
        total += *arr[i];

    return total;
}

/*
int sumArr(int* arr, int n) {
    cout << "size of arr" << sizeof arr << endl;
    을 찍으면 , 사이즈가 4가나옴, 이는 배열의 첫번째 원소의 사이즈
} 
*/

/*
int sumArr(int* begin, int* end){
    int total = 0;
    int* pt;

    for (pt = begin; pt != end; pt++)
        total += *pt;

    return total;
}
*/