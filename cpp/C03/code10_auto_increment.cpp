//自增和自减
#include <iostream>
using namespace std;

int main(){
    int i=0;
    int i2=0;
    int j=0;
    int j2=0;
    cout << ++i << endl;
    cout << i2++ << endl;
    cout << --j << endl;
    cout << j2-- << endl;
    //for循环不受k++还是++k影响
    for(int k=0;k<10;k++){
        cout << k << " ";
    }
    cout << endl;
    for(int k=0;k<10;++k){
        cout << k << " ";
    }
}
