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
    string a,b,c;
    cin >> a;
    cin >> b;
    a=a+b;
    cin >> c;
    for(int i=0;i<a.length();i++){
        for(int j=0;j<c.length();j++){
            if(a[i]==c[j]){
                a.erase(i,1);
                c.erase(j,1);
                j--;
                i--;
            };
        };
    };
    if(a.empty() && c.empty()){
        cout << "YES";
    }else{
        cout << "NO";
    };
    return 0;
};
