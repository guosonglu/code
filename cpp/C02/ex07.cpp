//编一个程序，一次显示文件的一行，然后，等待用户按回车键后显示下一行。
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream ifs("ex07.cpp");
    string line;
    while(getline(ifs,line)){
        cout << line << endl;
        cin.get();
    }
}
