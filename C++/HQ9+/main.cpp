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
    cin >> a;
    int len=a.length();
    for(int i=0;i<len;i++){
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9'){
            cout << "YES";
            break;
        };
        if(i==len-1){
            cout << "NO";
        };
    };

    return 0;
};
