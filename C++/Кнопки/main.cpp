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
    int a;
    cin >> a;
    int turns=0;
    for(int i=1;i<=a;i++){
        turns+=(a-i)*i;
    };
    cout << turns+a;
    return 0;
};
