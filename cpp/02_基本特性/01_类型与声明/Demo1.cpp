#include <iostream>
#include <climits>
#include <limits>
using namespace std;

int main(){
    cout << "布尔类型====================" << endl;
    cout << "布尔值长度：" << sizeof(bool) << "字节" <<endl;
    cout << "字符类型====================" << endl;
    cout << "char:" << "默认字符类型" << endl;
    cout << "char长度：" << sizeof(char) << endl;
    cout << "char取值范围：" << CHAR_MIN << "~" << CHAR_MAX << endl;
    cout << "可见字符打印：" << endl;
    for(int i=33;i<CHAR_MAX;i++){
        if(i>0 && i%8==0)
            cout << i << ":" << (char)i << "  " << endl;
        else
            cout << i << ":" << (char)i << "  ";
        if(i==CHAR_MAX-1)
            cout << endl;
    }
    cout << "类型转换：" << static_cast<char>(48) << endl;
    cout << "----------" <<endl;
    cout << "signed char:带符号字符" << endl;
    cout << "signed char长度：" << sizeof(signed char) << endl;
    cout << "signed char取值范围：" << SCHAR_MIN << "~" << SCHAR_MAX << endl;
    cout << "----------" <<endl;
    cout << "unsigned char:不带符号字符" << endl;
    cout << "unsigned char长度：" << sizeof(unsigned char) << endl;
    cout << "unsigned char取值范围：" << 0 << "~" << UCHAR_MAX << endl;
    cout << "----------" << endl;
    cout << "wchar_t:存放Unicode等更大的字符集" << endl;
    cout << "wchar_t长度：" << sizeof(wchar_t) << endl;
    cout << "wchar_t取值范围：" << WCHAR_MIN << "~" << WCHAR_MAX << endl;
    cout << "----------" << endl;
    cout << "char8_t:存放UTF_8字符集,在c20标准下支持" << endl;
    cout << "----------" << endl;
    cout << "char16_t:存放UTF-16字符集" << endl;
    cout << "char16_t长度：" << sizeof(char16_t) << endl; 
    cout << "char16_t取值范围：" << numeric_limits<char16_t>::min() << "~" << numeric_limits<char16_t>::max() << endl;
    cout << "----------" << endl;
    cout << "char32_t:存放UTF-16字符集" << endl;
    cout << "char32_t长度：" << sizeof(char32_t) << endl;
    cout << "char32_t取值范围：" << numeric_limits<char32_t>::min() << "~" << numeric_limits<char32_t>::max() <<endl;
    cout << "整数类型====================" << endl;
    cout << "short int" << endl;
    cout << "short int长度:" << sizeof(short) << endl;
    cout << "short int取值范围：" << numeric_limits<short>::min() << "~" << numeric_limits<short>::max() << endl; 
    cout << "----------" << endl;
    cout << "int" << endl;
    cout << "int长度：" << sizeof(int) << endl;
    cout << "int取值范围：" << numeric_limits<int>::min() << "~" << numeric_limits<int>::max() << endl;
    cout << "----------" << endl;
    cout << "long int" << endl;
    cout << "long int长度：" << sizeof(long) << endl;
    cout << "long int取值范围：" << numeric_limits<long>::min() << "~" << numeric_limits<long>::max() << endl;
    cout << "----------" << endl;
    cout << "long long int" << endl;
    cout << "long long int长度：" << sizeof(long long) << endl;
    cout << "long long int取值范围：" << numeric_limits<long long>::min() << "~" << numeric_limits<long long>::max() << endl;
}
