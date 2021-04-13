#include <iostream>
using namespace std;

class Vector{
    public:
        Vector(int s):
        elem{new double[s]},
        sz{s}
        {}
        double& operator[](int i){
            return elem[i];
        }
        int size(){
            return sz;
        }
    private:
        double* elem;
        int sz;
};

int main(){
    Vector v(6);
    cout << "变量的指针：" << &v <<endl;
    cout << "变量的长度：" << sizeof(v) << endl;
    cout << "变量中元素的指针：" << &v[0] << endl;
    cout << "指针的长度：" << sizeof(&v[0]) <<endl;
}
