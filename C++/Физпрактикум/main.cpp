#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("input.txt");
#define cin fin
ofstream fout("output.txt");
#define cout fout

int toright(int *arr, int n){
    int res=0;
    int k=n-1;
    for(int i=0;i<n;i++){
        if(arr[i]*2<arr[k]){
            res++;
        };
    };
    return res;
};

int toleft(int *arr, int n){
    int res=0;
    int k=n-1;
    for(int i=k;i>=0;i--){
        if(arr[i]>arr[0]*2){
            res++;
        };
    };
    return res;
};

int toc(int *arr, int n){
    int res=0;
    int k=n-1;
    for(int i=0;i<k-i;i++){
        if(arr[i]*2<arr[k-i]){
            if(arr[i]*2>=arr[k-i-1]){
                //arr[k-i]=0;
                res++;
            }else{
                //arr[i]=0;
                //arr[k-i]=0;
                res=res+2;
            };
        };
    };
    return res;
};

int main()
{
    int n;
    cin >> n;
    int g[n];
    for(int i=0;i<n;i++){
        cin >> g[i];
    };
    sort(g,g+n);
    //for(int i=0;i<n;i++){
    //    cout << g[i] << " ";
    //};
    //cout << endl;
    //for(int i=0;i<n;i++){
    //    if(g[i]*2<g[k]){
    //        res++;
    //    };
    //};
    if(toleft(g,n)<=toright(g,n) && toleft(g,n)<=toc(g,n)){
        cout << toleft(g,n);
    }else if(toright(g,n)<=toc(g,n) && toright(g,n)<=toleft(g,n)){
        cout << toright(g,n);
    }else if(toc(g,n)<=toright(g,n) && toc(g,n)<=toleft(g,n)){
        cout << toc(g,n);
    };
    return 0;
};
