//函数的返回值
#include <iostream>
using namespace std;

char cfunc(int i){
    if(i ==0){
        return 'a';
    }
    if(i == 1){
        return 'g';
    }
    if(i == 5){
        return 'z';
    }
    return 'c';
}

int main(){
   cout << "请输入一个数：";
   int val;
   cin >> val;
   cout << cfunc(val) << endl;
}
