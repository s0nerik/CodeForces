#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("input.txt");
#define cin fin
ofstream fout("output.txt");
#define cout fout

int check(int *arr,int n){
    int y=0;
    int x=0;
    int res[n*n];
    for(y;y<n;y++){
        for(x;x<n;x++){
            if((arr[y]*arr[y+1])%3==0){
                res[x]=0; //down
                break;
            };
        };
    };
};

int main()
{
    int n;
    cin >> n;
    int g[n][n];
    for(int y=0;y<n;y++){
        for(int x=0;x<n;x++){
            cin >> g[x][y];
        };
    };
    return 0;
};
