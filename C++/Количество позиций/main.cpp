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
    int n,a,b;
    cin >> n >> a >> b;
    int x=n-a;
    while(x-b>1){
        x--;
    };
    cout << x;
    return 0;
};
