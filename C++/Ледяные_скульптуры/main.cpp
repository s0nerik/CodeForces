#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

//ifstream fin("input.txt");
//#define cin fin
//ofstream fout("output.txt");
//#define cout fout

int main()
{
    int n;
    cin >> n;
    int t[n];
    for(int i=0;i<n;i++){
        cin >> t[i];
    };
    int s1=0;
    int s2=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            s2+=t[i-1];
        }else{
            s1+=t[i-1];
        };
    };
    bool allpos=true;
    for(int i=0;i<n;i++){
        if(t[i]<0){
            allpos=false;
            break;
        };
    };
    if( allpos || n<6 || (s1+s2>=s1)&&(s1+s2>=s2) ){
        cout << s1+s2;
    }else{
        if(s1>=s2){
            cout << s1;
        }else{
            cout << s2;
        };
    };
    //cout << s2 << " " << s1;
    return 0;
};
