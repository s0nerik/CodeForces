#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

ifstream fin("input.txt");
#define cin fin
//ofstream fout("output.txt");
//#define cout fout

bool checknum(int a){
    if(a>2){
        int b=sqrt(a);
        for(int i=2;i<=b;i++){
            if(a%i==0){
                return false;
            };
        };
    }else if(a==2){
        return true;
    }else if(a==1){
        return false;
    };
    return true;
};

int maximal(int *a,int y, int x){
    int *temp;
    temp=&a[0];
    for(int i=0;i<y;i++)
        for(int k=0;k<x;k++)
            if(*((a+i)+k)>*temp)
                temp=((a+i)+k);
    return *temp;
};

int main()
{
    int x,y;
    cin >> y >> x;
    int a[y][x];
    for(int i=0;i<y;i++){
        for(int k=0;k<x;k++){
            cin >> a[i][k];
        };
    };
    //cout << maximal(*a,y,x);
    int maximum=maximal(*a,y,x);
    vector<int> simples;
    for(int i=1;i<=100000;i++){
        if(checknum(i)){
            simples.push_back(i);
        };
    };
    //for(int i=0;i<simples.size();i++){
    //    cout << simples[i] << " ";
    //};
    int resx=0;
    for(int i=0;i<y;i++){
        int temp=0;
        for(int k=0;k<x;k++){
            for(int s=0;s<simples.size();s++){
                if(a[i][k]==simples[s]){
                    cout << "+";
                    temp++;
                    break;
                };
            };
        };
        if(temp>resx){
            resx=temp;
        };
        cout << endl;
    };
    int resy=0;
    for(int i=0;i<x;i++){
        int temp=0;
        for(int k=0;k<y;k++){
            for(int s=0;s<simples.size();s++){
                if(a[k][i]==simples[s]){
                    cout << "+";
                    temp++;
                    break;
                };
            };
        };
        if(temp>resy){
            resy=temp;
        };
        cout << endl;
    };
    cout << x-resx << " " << y-resy;

    return 0;
};
