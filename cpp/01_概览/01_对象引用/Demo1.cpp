#include <iostream>
using namespace std;
int main(){
    int v[]={
        1,2,3,4,5,6
    };
    cout << "数组元素的指针：" << &v[0] << endl;
    cout << "数组元素的指针：" << &v[1] << endl;
    cout << "数组元素的指针：" << &v[2] << endl;
    cout << "数组元素的指针：" << &v[3] << endl;
    cout << "数组元素的指针：" << &v[4] << endl;
    cout << "数组元素的指针：" << &v[5] << endl;
    for(auto& x:v){
        cout << "数组引用指针：" << &x <<endl;
        ++x;
    }
    for(auto x:v){
        cout << "变量指针：" << &x <<endl;
    }
    return 0;
}
