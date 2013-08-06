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

bool check(int *a,int n,int pos){
    for(int i=pos;i<n && i!=0;i++){
        if(a[i-1]>a[i]){
            return true;
        };
    };
    return false;
};

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    };
    int res=0;
    for(int i=0;i<n;i++){
        if(check(a,n,i)){
            res++;
        };
    };
    cout << res;
    return 0;
};
