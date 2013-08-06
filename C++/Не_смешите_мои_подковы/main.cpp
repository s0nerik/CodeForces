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
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    for(int i=0;i<4;i++){
        for(int k=0;k<4 && k!=i;k++){
            if(a[i]==a[k]){
                a[i]=-1;
            };
        };
    };
    int res=0;
    for(int i=0;i<4;i++){
        if(a[i]==-1){
            res++;
        };
    };
    cout << res;
    return 0;
};
