#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

//ifstream fin("input.txt");
//#define cin fin

int check(string m){
    int s=0;
    for(int i=0;i<m.length();i++){
        if(m[i]!=' ' && (m[i]=='a' || m[i]=='e' || m[i]=='i' || m[i]=='o' || m[i]=='u')){
            s++;
        };
    };
    return s;
};

int main()
{
    string m;
    int found[3];
    //cin >> m;
    getline(cin,m);
    if (check(m)!=5){found[0]=0;}else{found[0]=1;};
    getline(cin,m);
    if (check(m)!=7){found[1]=0;}else{found[1]=1;};
    getline(cin,m);
    if (check(m)!=5){found[2]=0;}else{found[2]=1;};
    for (int i=0;i<3;i++){
    if (found[i]==0){cout<<"NO";break;}else if(i==2){cout<<"YES";};
    };
    return 0;
};
