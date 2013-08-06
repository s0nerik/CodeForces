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
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    };
    int minimal=a[0],
        maximal=a[0],
        res=0;
    for(int i=0;i<n;i++){
        if(a[i]>maximal){
            maximal=a[i];
            res++;
        };
        if(a[i]<minimal){
            minimal=a[i];
            res++;
        };
    };
    cout << res;
    return 0;
};
