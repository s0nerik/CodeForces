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
    int x[n],y[n],z[n];
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i] >> z[i];
    };
    int resx=0;
    int resy=0;
    int resz=0;
    for(int i=0;i<n;i++){
        resx+=x[i];
        resy+=y[i];
        resz+=z[i];
    };
    if(resx==0 && resy==0 && resz==0){
        cout << "YES";
    }else{
        cout << "NO";
    };
    return 0;
};
