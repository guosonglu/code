//变量的范围
int main(){
    int scp1;
    //scp1变量可用
    {
        //scp1仍然可用
        int scp2;
        //scp2变量可用
        {
            //scp1,scp2仍然可用
            int scp3;
            //scp1,scp2,scp3可用
        }//scp3在这里销毁
        //scp3不可用
        //scp1,scp2可用
    } //scp2在这里销毁
    //scp2,scp3不可用
    //scp1仍然可用
}//scp1在这里销毁
