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
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        a[i]--;
    };
    for(int i=0;i<n;i++){
        b[i]=a[i];
    };
    for(int i=0;i<n;i++){
        b[a[i]]=i;
    };
    for(int i=0;i<n;i++){
        cout << b[i]+1 << " ";
    };
    return 0;
};
