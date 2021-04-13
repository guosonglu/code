#include <iostream>
using namespace std;

void test(int& index);

int main(){
    int a=1;
    int b=a;
    cout << &a << endl;
    cout << &b << endl;
    int aa=1;
    cout << aa << endl;
    test(aa);
    cout << aa << endl;
}

void test(int& index){
    index++;
}


