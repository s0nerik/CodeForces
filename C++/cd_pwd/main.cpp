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

string parent(string in){
    string out;
    int len=in.length()-1;
    for(int i=len;i>=0;i--){
        if(in[i]=='/'){
            out=in.substr(0,i+1);
            return out;
        };
    };
};

void pwd(string in){
    cout << in << endl;
};

string cd(string to, string prev){
    if(to[0]=='/'){
        return to;
    }else{
        for(int i=to.length()-1;i>=0;i--){
            if(to[i]=='.' && to[i-1]=='.'){
                return parent(to)+to;
            };
        };
        return prev+"/"+to;
    };
};

int main()
{
    int n;
    cin >> n;
    string in;
    string dir;
    string now="/";
    string prev="/";
    for(int i=0;i<n;i++){
        cin >> in;
        if(in[0]=='p' && in[1]=='w' && in[2]=='d'){
            pwd(now);
        };
    };
    cout << cd("vasya/../petya");
    return 0;
};
