//修改Fillvector.cpp使它能把vector中的所有元素连接成单独的一个字符串，并打印，但
//不要加上行号。
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream ifs("ex06.cpp");
    vector<string> v;
    string line;
    string ret;
    while(getline(ifs,line))
        v.push_back(line);
    for(int i=0;i<v.size();i++){
        ret += v[i] + "\n";
    }
    cout << ret;
}
