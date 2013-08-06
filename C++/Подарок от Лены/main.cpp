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
    int n;
    cin >> n;
    for(int i=0;i<=n;i++){
        for(int k=0;k<n-i;k++){
            cout << "  ";
        };
        for(int z=0;z<=i;z++){
            if(i!=0 && i!=2*n+1){cout << z << " ";}else{cout << z;};
            if(z==i){
                for(int n=z-1;n>=0;n--){
                    if(n!=0){cout << n << " ";}else{cout << n;};
                };
            };
        };
        cout << endl;
    };
    for(int i=n-1;i>=0;i--){
        for(int k=0;k<n-i;k++){
            cout << "  ";
        };
        for(int z=0;z<=i;z++){
            if(i!=0 && i!=2*n+1){cout << z << " ";}else{cout << z;};
            if(z==i){
                for(int n=z-1;n>=0;n--){
                    if(n!=0){cout << n << " ";}else{cout << n;};
                };
            };
        };
        cout << endl;
    };
    return 0;
};
