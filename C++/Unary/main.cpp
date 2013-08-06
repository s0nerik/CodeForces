#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <sstream>

using namespace std;

ifstream fin("input.txt");
#define cin fin
//ofstream fout("output.txt");
//#define cout fout

string toStr(long long num){
    stringstream ss;
    ss << num;
    return ss.str();
};

int main()
{
    string a;
    cin >> a;
    int len=a.length();
    int bin[len];
    string binary="";
    long long dec=0;
    long long res=1;
    for(int i=0;i<len;i++){
        switch(a[i]){
            case('>'):
                bin[i]=1000;
                break;
            case('<'):
                bin[i]=1001;
                break;
            case('+'):
                bin[i]=1010;
                break;
            case('-'):
                bin[i]=1011;
                break;
            case('.'):
                bin[i]=1100;
                break;
            case(','):
                bin[i]=1101;
                break;
            case('['):
                bin[i]=1110;
                break;
            case(']'):
                bin[i]=1111;
                break;
        };
    };
    for(int i=0;i<len;i++){
        binary=binary+toStr(bin[i]);
        //cout << toStr(bin[i])<<endl;
    };
    //cout << binary << endl;
    int binlen=binary.length();
    for(int i=0;i<binlen;i++){
        if(binary[i]=='1'){
            dec=dec+pow(2,binlen-i-1);
        };
    };
    string sdec=toStr(dec);
    string one;
    long long div=1000003;
    if(dec>div){
        for(int i=0;i<sdec.length()-7;i++){
            one=one+sdec[i];
        };
    };
    //for(int i=0;div*i<dec;i++){
    //    div=div*i;
    //};
    //cout << dec-div;
    cout << sdec << endl << one;
    //cout << fmodl(dec,1000003);
    return 0;
};
