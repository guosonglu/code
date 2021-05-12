//while语句
//猜数字

#include <iostream>
using namespace std;

int main(){
    int secret =15;
    int guess =0;
    while(secret != guess){
        cout << "请猜一个数：" << endl;
        cin >> guess;
    }
    cout << "猜对了" << endl;
}
