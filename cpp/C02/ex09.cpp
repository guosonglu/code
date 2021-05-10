//创建三个vector<float>对象，与第8题一样填写前两个对象。编一个for循环，把前两个
//vector的每一个相应元素相加起来，结果放入第三个vector的相应元素中。显示这三个
//vector的结果。
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<float> v1,v2,v3;
    for(int i=0;i<25;i++){
        v1.push_back(i+0.5);
        v2.push_back(i+4);
    }
    for(int i=0;i<v1.size();i++){
        v3.push_back(v1[i]+v2[i]);
    }
    for(int i=0;i<v1.size();i++){
        cout << v1[i] << "+" << v2[i]
            << "=" << v3[i] << endl;
    }
}
