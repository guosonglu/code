//if-else
#include <iostream>
using namespace std;

int main(){
    int i;
    cout << "输入一个数并按回车：" << endl;
    cin >> i;
    if(i>5)
        cout << "大于5" << endl;
    else if(i<5)
        cout << "小于5" << endl;
    else
        cout << "等于5" << endl;
    cout << "输入一个数并按回车：" << endl;
    cin >> i;
    if(i<10)
        if(i>5)
            cout << "5 < i < 10" << endl;
        else
            cout << "i <= 5" << endl;
    else
        cout << "i >= 10" << endl;

}
