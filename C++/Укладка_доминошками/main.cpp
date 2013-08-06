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
    int a,b,res;
    cin >> a >> b;
    if(a%2==0){
        res=a/2*b;
    }else if(b%2==0){
        res=b/2*a;
    }else if(a%2!=0 && b%2!=0 && a!=1){
        res=(a-1)/2*b+(b-1)/2;
    }else if(b!=1){
        res=(b-1)/2*a+(a-1)/2;
    }else if(a==1){
        res=b/2;
    }else if(b==1){
        res=a/2;
    };
    cout << res;
    return 0;
};
