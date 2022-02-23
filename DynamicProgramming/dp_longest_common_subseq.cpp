#include <bits/stdc++.h>

using namespace std;


int LCS(string s,string t){

    int m = s.size();
    int n = t.size();
    vector<vector<int>>C(m+1,vector<int>(n+1,0));
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            if(s[i-1]==t[j-1]){
                C[i][j] = C[i-1][j-1] + 1;
            }
            else{
                C[i][j] = max(C[i-1][j],C[i][j-1]);
            }
        }
    }
    return C[m][n];
}


int main(){

    string s;
    string t;
    getline (cin, s);
    getline (cin, t);
    cout<<LCS(s,t);
}
