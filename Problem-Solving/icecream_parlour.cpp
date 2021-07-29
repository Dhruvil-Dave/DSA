
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int a=0;a<t;a++){

        int k,n;
        cin>>k>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int start=0,end=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==k){
                    start=i+1;
                    end=j+1;
                }
            }
        }
        cout<<start<<" "<<end;

    }

    return 0;
}
