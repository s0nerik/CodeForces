#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

//ifstream fin("input.txt");
//#define cin fin
//ofstream fout("output.txt");
//#define cout fout

int main()
{
    string n;
    cin >> n;
    for(int i=0;i<n.length();i++){
        if(n[i]=='A' || n[i]=='a'
        || n[i]=='O' || n[i]=='o'
        || n[i]=='Y' || n[i]=='y'
        || n[i]=='E' || n[i]=='e'
        || n[i]=='U' || n[i]=='u'
        || n[i]=='I' || n[i]=='i'){
            n.erase(i,1);
            i--;
        };
    };
    for(int i=0;i<n.length();i++){
        if(isupper(n[i])){
            n.replace(i,1,1,tolower(n[i]));
        };
    };
    for(int i=0;i<n.length();i=i+2){
        n.insert(i,".");
    };
    cout << n;
    return 0;
};
