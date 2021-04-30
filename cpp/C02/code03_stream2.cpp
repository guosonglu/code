//输入输出流的更多功能
#include <iostream>
using namespace std;

int main(){
    //使用操作符指定格式
    cout << "十进制："
        << dec << 15 << endl;
    cout << "八进制：" << oct << 15 << endl;
    cout << "十六进制：" << hex << 15 << endl;
    cout << "浮点数：" << 3.14159 << endl;
    cout << "转义字符：" << char(27) << endl;
}
