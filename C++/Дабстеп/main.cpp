#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

//ifstream fin("input.txt");
//#define cin fin

int main()
{
    string m;
    cin >> m;
    int found;
    for (int i=0;i<m.length();i++){
        found = m.find("WUB");
        if(found!=string::npos){
            m=m.replace(found,3," ");
        };
    };
    //for (int i=0;i<m.length();i++){
    //    for (int k=1;m[i]==' ' && m[i+k]==' ';k++){
    //        m=m.erase(i+k,1);
    //    };
    //};
    //if(m[0]==' '){
    //    m=m.erase(0,1);
    //};
    cout << m << endl;
    return 0;
};
