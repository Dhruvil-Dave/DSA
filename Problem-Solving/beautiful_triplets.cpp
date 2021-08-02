#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(a[j]-a[i]==d && a[k]-a[j]==d){
                    count++;
                }
            }
        }
    }
   cout<<count;


    return 0;
}
