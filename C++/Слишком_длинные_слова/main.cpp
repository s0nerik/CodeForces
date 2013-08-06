#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

//ifstream fin("input.txt");
//#define cin fin

int main()
{
    string a;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a.length()>10){
            cout << a[0] << a.length()-2 << a[a.length()-1] << endl;
        }else{
            cout << a << endl;
        };
    };
    return 0;
};
