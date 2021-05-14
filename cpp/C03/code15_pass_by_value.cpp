//方法按值传递
//局部变量无法改变外部变量
#include <iostream>
using namespace std;

void f(int a){
    cout << "a = " << a << endl;
    a=5;
    cout << "a = " << a << endl;
}

int main(){
    int x=47;
    cout << "x = " << x << endl;
    f(x);
    cout << "x = " << x << endl; //x并不会跟着改变
}
