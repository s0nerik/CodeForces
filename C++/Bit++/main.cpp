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
    int x=0;
    int n;
    cin >> n;
    string a;
    for(int i=0;i<n;i++){
        cin >> a;
        if((a[0]=='X' && a[1]=='+' && a[2]=='+') || (a[0]=='+' && a[1]=='+' && a[2]=='X')){
            x++;
        }else{
            x--;
        };
    };
    cout << x;
    return 0;
};
