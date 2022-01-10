#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){

    unordered_map<string,int> mymap;
    mymap["abc"] = 1;
    mymap["abc1"] = 2;
    mymap["abc2"] = 3;
    mymap["abc3"] = 4;
    mymap["abc4"] = 5;
    mymap["abc5"] = 6;

    for(unordered_map<string, int>::iterator it = mymap.begin(); it != mymap.end(); it++){
        cout<<"Key: "<<it->first<<" Value "<<it->second<<endl;
    }

    cout<<"-----------------"<<endl;

    map<string,int> mymap2;
    mymap2["abc"] = 1;
    mymap2["abc1"] = 2;
    mymap2["abc2"] = 3;
    mymap2["abc3"] = 4;
    mymap2["abc4"] = 5;
    mymap2["abc5"] = 6;

    for(map<string, int>::iterator it = mymap2.begin(); it != mymap2.end(); it++){
        cout<<"Key: "<<it->first<<" Value "<<it->second<<endl;
    }


}
