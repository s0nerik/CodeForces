#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

//ifstream fin("input.txt");
//#define cin fin
//ofstream fout("output.txt");
//#define cout fout

int main(){
    string a;
    cin >> a;
    string res="";
    for(int i=0;i<a.length();i++){
        if(a[i]=='-' && a[i+1]=='-'){
            res.append("2");
            i++;
        }else if(a[i]=='-' && a[i+1]=='.'){
            res.append("1");
            i++;
        }else if(a[i]=='.'){
            res.append("0");
        };
    };
    int i=0;
    int zeros=0;
    while(a[i]=='.' && a[i-1]=='.'){
        zeros++;
        i++;
    };
    for(int i=0;i<zeros;i++){
        cout << 0;
    };
    cout << res;
    return 0;
}
