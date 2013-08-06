#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
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
    string a1,a2;
    cin >> a1 >> a2;
    int len=a1.length();
    for(int i=0;i<len;i++){
        if(isupper(a1[i])){
            a1[i]=tolower(a1[i]);
        };
        if(isupper(a2[i])){
            a2[i]=tolower(a2[i]);
        };
        if(a2[i]>a1[i]){
            cout << -1;
            break;
        };
        if(a1[i]>a2[i]){
            cout << 1;
            break;
        };
        if(a1[i]==a2[i] && i==len-1){
            cout << 0;
            break;
        }
    };
    return 0;
};
