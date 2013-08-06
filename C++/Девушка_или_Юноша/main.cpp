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
        for(int k=0;k<len && k!=i;k++){
            if(a[i]==a[k]){
                a[k]='0';
            };
        };
    };
    for(int i=0;i<len;i++){
        if(a[i]=='0'){
            a.erase(i,1);
            i--;
        };
    };
    int res=a.length();
    if(res%2==0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    };
    return 0;
};
