//编一个程序，创建一个vector<float>，像前面的练习那样输入25个数。求每个数的平方，
//并把它们放入vector的同样位置。显示运算前后的vector。
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<float> v;
    for(int i=0;i<25;i++){
        v.push_back(i+1.5);
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] <<  " ";
    }
    for(int i=0;i<v.size();i++){
        v[i]=v[i]*v[i];
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << " " ;
    }
}
