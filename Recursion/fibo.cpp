#include<iostream>
using namespace std;

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int temp1 = fibo(n-1);
    int temp2 = fibo(n-2);

    return temp1+temp2;

}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}
