//goto
#include <iostream>
using namespace std;

int main(){
    int val =0;
    for(int i=0;i<1000;i++){
        for(int j=1;j<100;j+=10){
            val = i*j;
            if(val >47000){
                goto bottom;
            }
        }
    }
bottom:
    cout << val << endl;
}
