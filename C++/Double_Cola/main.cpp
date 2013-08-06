#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

//ifstream fin("input.txt");
//#define cin fin
//ofstream fout("output.txt");
//#define cout fout

int main()
{
    int n;
    cin >> n;
    n--;
    int k;
    for(int p=0;p<n;p++){
        if(5*pow(2,p)>n){
            k=p;
            break;
        }else{
            n-=5*pow(2,p);
        };
    };

    int b = (int)n/pow(2,k);
    switch(b){
    case 0:
        cout << "Sheldon";
        break;
    case 1:
        cout << "Leonard";
        break;
    case 2:
        cout << "Penny";
        break;
    case 3:
        cout << "Rajesh";
        break;
    case 4:
        cout << "Howard";
        break;
    };
    return 0;
};
