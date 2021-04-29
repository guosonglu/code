//将十进制转为八进制和十六进制
#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "请输入一个十进制的数：";
    cin >> number;
    cout << "八进制=0"
        << oct << number <<endl;
    cout << "十六进制=0x"
        << hex << number << endl;
}
