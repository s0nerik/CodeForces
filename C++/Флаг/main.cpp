#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

//ifstream fin("input.txt");
//#define cin fin
//ofstream fout("output.txt");
//#define cout fout

bool check(string a,int n){
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            return false;
        };
    };
    return true;
};

int main()
{
    int n,m;
    cin >> n >> m;
    string a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    };
    for(int i=0;i<n;i++){
        if(check(a[i],m)==false){
            cout << "NO";
            break;
        };
        if(i<n-1){
            if(a[i][0]==a[i+1][0]){
                cout << "NO";
                break;
            };
        };
        if(i==n-1){
            cout << "YES";
            break;
        };
    };
    return 0;
};
