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
    int a,b,n;
    int in,out;
    int now=0;
    int cap=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> out >> in;
        now=now-out+in;
        if(cap<now){
            cap=now;
        };
    };
    cout << cap;
    return 0;
};
