#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

ifstream fin("input.txt");
#define cin fin
//ofstream fout("output.txt");
//#define cout fout

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
    };
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
        if(b[i]*pow(2,a[i])<){

        }
    };


    return 0;
};
