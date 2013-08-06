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
    string a,b;
    cin >> a >> b;
    string res="";
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]){
            res=res+"1";
        }else{
            res=res+"0";
        };
    };
    cout << res;

    return 0;
};
