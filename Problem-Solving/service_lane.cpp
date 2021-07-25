#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n;
    cin>>t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int brr[t][2];
    for(int i=0;i<t;i++){
        for(int j=0;j<2;j++){
            cin>>brr[i][j];
        }
    }

    /**for(int i=0;i<t;i++){
        for(int j=0;j<2;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }**/
    int start,end;

    int crr[t];
    for(int i=0;i<t;i++){
        int min=INT_MAX,temp=0;
        start=brr[i][0];
        end=brr[i][1];
        //cout<<start<<" "<<end<<endl;
        for(int j=start;j<end;j++){
            if(arr[j]<arr[j+1] || arr[j]==arr[j+1]){
                temp=arr[j];
                if(temp<min){
                min=temp;
                }
            }
            else{
                temp=arr[j+1];
                if(temp<min){
                min=temp;
                }
            }

        }
        crr[i]=min;
    }

    for(int i=0;i<t;i++){
        cout<<crr[i]<<endl;
    }


    return 0;
}
