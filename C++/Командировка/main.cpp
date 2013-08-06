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
    int a[12];
    int k;
    cin >> k;
    for(int i=0;i<12;i++){
        cin >> a[i];
    };
    sort(a,a+12);
    //for(int i=0;i<12;i++){
    //    cout << a[i];
    //};
    //cout << endl;
    int res=0;
    int x=0;
    int i=11;
    while(k>x && i>=0){
        x+=a[i];
        res++;
        i--;
    };
    if(x>=k){
        cout << res;
    }else{
        cout << -1;
    };
    return 0;
};
