//do-while语句
//猜数字2
#include <iostream>
using namespace std;

int main(){
    int secret = 15;
    int guess;
    do{
        cout << "请猜一个数：" << endl;
        cin >> guess;
    }while(secret != guess);
    cout << "猜对了" << endl;
}
