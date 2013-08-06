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
    string a;
    int n;
    cin >> n;
    cin >> a;
    int res=0;
    for (int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            res++;
        };
    };
    cout << res;
    return 0;
};
