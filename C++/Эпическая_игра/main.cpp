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

int bdiv(int a, int b){
    int i=a;
    while(i>0){
        if(b%i==0 && a%i==0){
            return i;
        };
        i--;
    };
};

bool check(int a, int b){
    if(bdiv(a,b)<b){
        return true;
    }else{
        return false;
    };
};

int res(int a, int b, int n){
    while(n>=0){
        if(check(a,n)){
            n=n-bdiv(a,n);
        }else{
            return 0;
        };
        if(check(b,n)){
            n=n-bdiv(b,n);
        }else{
            return 1;
        };
    };
};

int main()
{
    int a,b,n;
    cin >> a >> b >> n;
    cout << res(a,b,n);
    return 0;
};
