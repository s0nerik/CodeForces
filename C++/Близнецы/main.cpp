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

int toright(int *arr, int len, int sum){
    int newsum=0;
    int n=0;
    for(int i=0;i<len;i++){
        if(newsum<=sum){
            newsum=newsum+arr[i];
            sum=sum-arr[i];
            n++;
        };
    };
    return n;
};

void sumright(int *arr, int len, int sum, int &newsum){
    newsum=0;
    int n=0;
    for(int i=0;i<len;i++){
        if(newsum<=sum){
            newsum=newsum+arr[i];
            sum=sum-arr[i];
            n++;
        };
    };
};

int toleft(int *arr, int len, int sum){
    int newsum=0;
    int n=0;
    for(int i=len-1;i>=0;i--){
        if(newsum<=sum){
            newsum=newsum+arr[i];
            sum=sum-arr[i];
            n++;
        };
    };
    return n;
};

void sumleft(int *arr, int len, int sum, int &newsum){
    newsum=0;
    int n=0;
    for(int i=len-1;i>=0;i--){
        if(newsum<=sum){
            newsum=newsum+arr[i];
            sum=sum-arr[i];
            n++;
        };
    };
};

int toc(int *arr, int len, int sum){
    int newsum=0;
    int n=0;
    for(int i=0;i<len;i++){
        if(newsum<=sum){
            newsum=newsum+arr[i]+arr[len-i-1];
            sum=sum-arr[i]-arr[len-i-1];
            n=n+2;
        };
    };
    return n;
};

void sumc(int *arr, int len, int sum, int &newsum){
    newsum=0;
    int n=0;
    for(int i=0;i<len;i++){
        if(newsum<=sum){
            newsum=newsum+arr[i]+arr[len-i-1];
            sum=sum-arr[i]-arr[len-i-1];
            n=n+2;
        };
    };
};

int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum=sum+a[i];
    };
    sort(a,a+n);
    int sl,sr,sc;
    sumleft(a,n,sum,sl);
    sumright(a,n,sum,sr);
    sumc(a,n,sum,sc);

    int mr=toright(a,n,sum);
    int ml=toleft(a,n,sum);
    int mc=toc(a,n,sum);

    //cout << sr << " " << sl << " " << sc << endl;
    //cout << mr << " " << ml << " " << mc << endl;

    if( mr<ml && mr<mc ){
        cout << mr;
    }else if( ml<mr && ml<mc ){
        cout << ml;
    }else if( mc<mr && mc<ml && sc<sr && sc<sl){
        cout << mc;
    }else{
        if(mr<=ml){
            cout << mr;
        }else if(ml<=mr){
            cout << ml;
        };
    };
    return 0;
};
