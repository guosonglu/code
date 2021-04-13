#include "../inc/std.h"

class Token{
    public:
        char kind;
        double value;
};

Token get_token();//读取字符并封装为Token类
double expression(); //表达式：处理加和减
double term(); //处理乘法，除法和求余
double primary(); //处理数值和括号

int main(){
    
}

double expression(){
    double left=term();
    Token t=get_token();
    while(true){
        switch(t.kind){
            case '+':
                left+=term();
                t=get_token();
                break;
            case '-':
                left-=term();
                t=get_token();
                break;
            default:
                return left;
        }
    }
}

double term(){
    double left=primary();
    Token t=get_token();
    while(true){
        switch(t.kind){
            case '*':
              left+=primary();
        }
    }
}
