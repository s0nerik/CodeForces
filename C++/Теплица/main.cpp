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

int main()
{
    int n,m;
    cin >> n >> m;
    float a[n];
    int b[n];
    int c[n];
    int res=0;
    for(int i=0;i<n;i++){
        cin >> b[i] >> a[i];
    };
    for(int i=0;i<n;i++){
        c[i]=b[i];
    };
    sort(c,c+n);
    for(int i=0;i<n;i++){
        if(b[i]!=c[i]){
            swap(b[i],c[i]);
            res++;
        };
    };
    cout << res/2;

    return 0;
};
