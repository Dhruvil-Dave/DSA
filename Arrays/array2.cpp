#include<iostream>

using namespace std;

int main() {

    cout<<"Enter the number of elements ";
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0; i<n;i++){
        sum=sum+a[i];
    }

    cout<<sum;
    return 0;
}
