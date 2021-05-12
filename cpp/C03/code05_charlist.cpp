//for语句
//展示ASCII字符
#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<128;i++){
        if(i !=26){
            cout << "value:" << i
                << " character:"
                << char(i)
                << endl;
        }
    }
}
