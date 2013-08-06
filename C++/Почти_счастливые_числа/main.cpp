#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

//ifstream fin("input.txt");
//#define cin fin
//ofstream fout("output.txt");
//#define cout fout

int main()
{
    string a;
    cin >> a;
    int happy=0;
    for (int i=0;i<a.length();i++){
        if(a[i]=='4' || a[i]=='7'){
            happy++;
        };
    };
    string b;
    stringstream ss;
    ss<<happy;
    ss>>b;
    bool ans=true;
    for(int i=0;i<b.length();i++){
        if(b[i]!='4' && b[i]!='7'){
            ans=false;
            break;
        };
    };
    if(ans){
        cout << "YES";
    }else{
        cout << "NO";
    };
    return 0;
};
