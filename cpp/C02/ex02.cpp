//以Stream2.cpp、Numconv.cpp为例，编一个程序，让它根据输入的半径值求出圆面积，
//并打印。可以用运算符"*"求半径的平方。注意，不要用八进制或十六进制格式打印
//（它们只适用于整数类型）。
#include <iostream>
using namespace std;

int main(){
   const float pi = 3.141592654;
   cout << "根据半径计算圆的面积" << endl;
   float d;
   cout << "请输入圆的半径：";
   cin >> d;
   cout << "圆的面积为：" << d*d*pi << endl; 
}
