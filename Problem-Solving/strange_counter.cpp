#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int temp=3;
    int n=4;
    for(int i=1;i<=t;i++){
        if(n==1){
            n=temp*2;
            temp=n;

        }
        else{
            n--;
        }
    }
    cout<<n;
    return 0;
}
