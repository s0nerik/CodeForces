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
    int h[n],m[n];
    for(int i=0;i<n;i++){
        cin >> h[i] >> m[i];
    };
    //for(int i=0;i<n;i++){
    //    cout << h[i] << " " << m[i] << endl;
    //};
    int res=1;
    int newres=1;
    for(int i=0;i<n-1;i++){
        if(h[i]==h[i+1] && m[i]==m[i+1]){
            newres++;
            if(i==n-2 && newres>res){
                res=newres;
            };
            //cout << "+";
            //cout << newres << endl;
        }else if((h[i]!=h[i+1] || m[i]!=m[i+1]) && newres>res){
            res=newres;
            newres=1;
        }else{
            newres=1;
        };
    };
    cout << res;
    return 0;
};
