#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

//ifstream fin("input.txt");
//#define cin fin

int main()
{
    int n;
    cin >> n;
    int g[n];
    int res=0;
    for(int i=0;i<n;i++){
        cin >> g[i];
    };
    sort(g,g+n);
    int k=n-1;
    for(int i=0;i<n;i++){
        while(k>i){
            if(g[i]+g[k]<=4){
                g[k]=g[i]+g[k];
                g[i]=0;
                break;
            };
            k--;
        };
    };
    for(int i=0;i<n;i++){
        if(g[i]!=0){
            res++;
        };
    };
    cout << res;
    return 0;
};
