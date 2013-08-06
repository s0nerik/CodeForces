#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

ifstream fin("input.txt");
#define cin fin
//ofstream fout("output.txt");
//#define cout fout

int main()
{
    int n;
    cin >> n;
    int a[n];
    int s, t;
    for(int i=0;i<n;i++){
        cin >> a[i];
    };
    cin >> s >> t;
    int temp=0;
    if(s<t){
        for(int i=s-1;i<t-1;i++){
            temp+=a[i];
        };
    }else if(s>t){
        for(int i=t-1;i<s-1;i++){
            temp+=a[i];
        };
    }else if(s==t){
        cout << 0;
        return 0;
    };
    cout << temp;
    return 0;
};
