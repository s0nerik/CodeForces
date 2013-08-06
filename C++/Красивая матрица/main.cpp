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
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> a[i][j];
        };
    };
    //for(int i=0;i<5;i++){
    //    for(int j=0;j<5;j++){
    //        cout << a[i][j] << " ";
    //    };
    //    cout << endl;
    //};
    int x,y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
                x=j;
                y=i;
            };
        };
    };
    int res=0;
    if(x==2 && y==2){
        cout << 0;
        return 0;
    };
    while(x>2){
        res++;
        x--;
        //cout << "x:" << x << endl;
    };
    while(x<2){
        res++;
        x++;
        //cout << "x:" << x << endl;
    };
    while(y>2){
        res++;
        y--;
        //cout << "y:" << y << endl;
    };
    while(y<2){
        res++;
        y++;
        //cout << "y:" << y << endl;
    };
    cout << res;

    return 0;
};
