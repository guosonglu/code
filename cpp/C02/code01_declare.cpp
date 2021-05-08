//声明与定义
#include <iostream>
using namespace std;
extern int i; //只声明，不定义
extern float f(float); //方法声明
float b;  //声明并定义
float f(float a){  //方法定义
    return a+1.0;
}

int i;   //定义
int h(int x){   //声明并定义
    return x+1;
}

int main(){
    b=1.0;
    i=2;
    cout<<f(b)<<endl;
    cout<<h(i)<<endl;
}
