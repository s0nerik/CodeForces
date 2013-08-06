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

int dnumber(int n){
    vector<int> all;
    vector<int>::iterator it;
    it=all.begin();
    for(int i=0;i<n;i++){
        for(int k=1;k<10;k++){
            all.insert(it,k);
            all.push_back(10-k);
        };
        it=all.begin();
    };
    int i=0;
    it=all.begin();
    while(i!=all.size()){
        cout << all[i] << " ";
        i++;
    };
};

int main()
{
    int a;
    cin >> a;
    dnumber(a);
    return 0;
};
