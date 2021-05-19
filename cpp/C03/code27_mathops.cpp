//数学运算符的使用
#include <iostream>
using namespace std;

//预处理宏
#define PRINT(STR,VAR) \
    cout << STR " = " << VAR << endl;

int main(){
    int i,j,k;
    float u,v,w;
    cout << "enter an integer: ";
    cin >> j;
    cout << "enter anther integer: ";
    cin >> k;
    PRINT("j",j); PRINT("k",k);
    i=j+k; PRINT("j+k",i);
    i=j-k; PRINT("j-k",i);
    i=k/j; PRINT("k/j",i);
    i=k*j; PRINT("k*j",i);
    i=k%j; PRINT("k%j",i);
    j%=k; PRINT("j%=k",j);

    cout << "Enter a floating-point number:";
    cin >> v;
    cout << "Enter anthor floating-point number:";
    cin >> w;
    PRINT("v",v); PRINT("w",w);
    u=v+w; PRINT("v+w",u);
    u=v-w; PRINT("v-w",u);
    u=v*w; PRINT("v*w",u);
    u=v/w; PRINT("v/w",u);
    PRINT("u",u); PRINT("v",v);
    u+=v; PRINT("u+=v",u);
    u-=v; PRINT("u-=v",u);
    u*=v; PRINT("u*=v",u);
    u/=v; PRINT("u/=v",u)
}
