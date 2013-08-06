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
    int w;
    cin >> w;
    bool res=false;
    for(int i=w;i>2;i=i-2){
        if(i%2==0 && (w-i)%2==0){
            res = true;
        };
    };
    if(res==true){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
};
