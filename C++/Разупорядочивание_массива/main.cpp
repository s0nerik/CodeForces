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

bool is(int *arr, int n){
    if(n>2){
        for (int i=1;i<n-1;i++){
            if((arr[i]>arr[i+1] && arr[i]>arr[i-1]) || (arr[i]<arr[i+1] && arr[i]<arr[i-1])){
                return false;
            };
        };
    }else{
        return false;
    };
    return true;
};

void unsort(int *arr, int n, int &i){
    if(i<n-2){
        if(is(arr,n)){
            swap(arr[i],arr[i+1]);
        };
        if(is(arr,n)){
            i++;
            unsort(arr,n,i);
        };
    };
};

bool eq(int *arr,int n){
    if(n>2){
        for (int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                return false;
            };
        };
    }else{
        return false;
    };
    return true;
};

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    };
    if( is(arr,n)==true && eq(arr,n)==false ){
        unsort(arr,n,i);
        cout << i+1 << " " << i+2;
    }else{
        cout << -1;
    }
    return 0;
};
