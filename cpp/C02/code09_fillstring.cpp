//将文件拷贝到string对象中
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream in("code09_fillString.cpp");
    string s,line;
    while(getline(in,line)){
        s += line + "\n";
    }
    cout << s;
}
