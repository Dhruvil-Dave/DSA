#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    unordered_map<string,int> mymap;

    /// 1st was of inserting
    pair<string,int> p("abc",1);
    mymap.insert(p);

    ///easy way of inserting
    mymap["def"] = 3;

    ///find or access elements
    cout<<mymap["abc"]<<endl<<mymap["def"]<<endl;

    ///at function can be used for the same
    cout<<mymap.at("abc")<<endl<<mymap.at("def")<<endl;

    ///count function to check whether particular key exists or not
    if(mymap.count("def")>0){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }

    ///size of unordered map
    cout<<"Size "<<mymap.size()<<endl;

    ///erase or remove a key value pair from unordered map
    mymap.erase("def");
    cout<<"Size "<<mymap.size()<<endl;

}
