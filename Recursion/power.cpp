#include<iostream>
using namespace std;

int power(int x,int n){

    if(n==0){
        return 1;
    }
    int temp = power(x,n-1);

    return x*temp;

}

int main(){
    int n;
    int x;
    cout<<"Enter base ";
    cin>>x;
    cout<<"Enter power ";
    cin>>n;
    cout<<power(x,n);
    return 0;
}
