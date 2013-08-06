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
    if(len>=7){
        for(int i=6;i<len;i++){
            if(a[i]=='1' && a[i-1]=='1' && a[i-2]=='1' && a[i-3]=='1' && a[i-4]=='1' && a[i-5]=='1' && a[i-6]=='1' || a[i]=='0' && a[i-1]=='0' && a[i-2]=='0' && a[i-3]=='0' && a[i-4]=='0' && a[i-5]=='0' && a[i-6]=='0'){
                cout << "YES";
                break;
            };
            if(i==len-1){
                cout << "NO";
                break;
            };
        };
    }else{
        cout << "NO";
    };
    return 0;
};
