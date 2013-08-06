#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

ifstream fin("input.txt");
#define cin fin
//ofstream fout("output.txt");
//#define cout fout

int main()
{
    int n;
    cin >> n;
    string a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    };
    for(int i=0;i<n;i++){
       cout << a[i] << endl;
    };

    return 0;
};
