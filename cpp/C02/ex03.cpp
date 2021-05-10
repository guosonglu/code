//编一个程序用来打开文件并统计文件中以空格隔开的单词数目。
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream ifs("ex03.cpp");
    string word;
    int count=0;
    while(ifs >> word){
       count++; 
    }
    cout << "文件中单词数为：" << count << endl;
}

