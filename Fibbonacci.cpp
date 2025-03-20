#include<iostream>
using namespace std;
class Fibonacci{
    public:
    void fibonacci(int n1,int n2){
        if(n1>100){
            return;
        }else{
            cout<<n1<<endl;
            fibonacci(n2,n1+n2);

         }
     }
        
};
int main(){
    Fibonacci fibo;
    int n=0;
    fibo.fibonacci(n,n+1);
}
