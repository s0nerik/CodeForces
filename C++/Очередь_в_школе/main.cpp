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
    int n,s;
    cin >> n >> s;
    string a;
    cin >> a;
    for(int i=0;i<s;i++){
        for(int k=0;k<n-1;k++){
            if(a[k]=='B' && a[k+1]=='G'){
                swap(a[k],a[k+1]);
                k++;
            };
        };
    };
    cout << a;

    return 0;
};
