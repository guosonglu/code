//extern 外部变量
#include <iostream>
using namespace std;

extern int i;
extern void func();

int main(){
    i=0;
    func();
}

int i;
void func(){
    i++;
    cout << i;
}
