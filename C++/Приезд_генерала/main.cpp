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

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    };
    int minimal=*min_element(a,a+n);
    int maximal=*max_element(a,a+n);
    int res=0;
    //for(int i=0;i<n;i++){
    //    cout << a[i] << " ";
    //};
    //cout << endl;
    //cout << maximal << " " << minimal << endl;
    for(int i=n-1;i>=0;i--){
        if(a[i]==minimal){
            minimal=i;
            break;
        };
    };
    for(int i=0;i<n;i++){
        if(a[i]==maximal){
            maximal=i;
            break;
        };
    };
    //cout << maximal << " " << minimal << endl;
    if(maximal<minimal){
        res=n-minimal-1+maximal;
    }else if(maximal>minimal){
        res=n-minimal-1+maximal-1;
    };
    cout << res;
    return 0;
};
