#include<iostream>
using namespace std;

int main() {

    char name[100];
    cout<<"Enter your name ";
    cin.getline(name,100);
    name[3]='d';
    name[4]='a';
    cout<<"Your name is "<<name;
    return 0;
}

