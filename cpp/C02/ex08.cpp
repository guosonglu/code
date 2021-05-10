//创建一个vector<float，并用一个for循环语句向它输入25个浮点数，显示vector的结果。

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<float> v;
    for(int i=0;i<25;i++){
        v.push_back(i+0.5);
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
