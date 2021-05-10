//修改Fillvector.cpp使它能从后向前打印各行。
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(){
    ifstream ifs("ex05.cpp");
    string line;
    vector<string> v;
    while(getline(ifs,line)){
        v.push_back(line);
    }
    for(int i=v.size()-1;i>=0;i--){
        cout << v[i] << endl;
    }
}
