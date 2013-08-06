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
    int a,b,c,n;
    int res=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a >> b >> c;
        if(a==1 && b==1 && c==1 || a==1 && b==1 || a==1 && c==1 || b==1 && c==1){
            res++;
        };
    };
    cout << res;
    return 0;
};
