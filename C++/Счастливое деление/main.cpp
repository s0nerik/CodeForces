#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

//ifstream fin("input.txt");
//#define cin fin
//ofstream fout("output.txt");
//#define cout fout

bool check(int n){
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%744==0 || n%474==0 || n%447==0 || n%747==0 || n%477==0 || n&774==0){
        return true;
    }else{
        return false;
    };
};

int main()
{
    int a;
    cin >> a;
    if(check(a)){
        cout << "YES";
    }else{
        cout << "NO";
    };
    return 0;
};
