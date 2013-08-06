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

int chet(int n){
    int ch=2;
    for(int i=2;i<=n;i++){
        if(i%2==0){
            ch=i;
        }else{
            n++;
        };
    };
    return ch;
};

int nechet(int n){
    int nech=1;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            nech=i;
        }else{
            n++;
        };
    };
    return nech;
};

int main()
{
    int n,k;
    cin >> n >> k;

    if(n%2==0){
        if(k<=n/2 || k==1){
            cout << nechet(k);
        }else{
            cout << chet(k-n/2);
        };
    }else{
        if(k<=ceil(n/2) || k==1){
            cout << nechet(k);
        }else{
            cout << chet(k-ceil(n/2));
        };
    };

    return 0;
};
