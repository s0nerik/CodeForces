#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool checkallupper(string str){
    int check[str.length()];
    for(unsigned int i=0;i<str.length();i++){
        if(isupper(str[i])==true){
            check[i]=1;
        }else{
            check[i]=0;
        };
    };
    for(unsigned int i=0;i<str.length();i++){
        if (check[i]==0){
            return false;
            break;
        };
    };
    return true;
};

char change(char a){
    if(islower(a)==true){
        return toupper(a);
    }else if(isupper(a)==true){
        return tolower(a);
    };
    return toupper(a);
};

int main()
{
string str;
cin >> str;
string sub=str.substr(1,str.length());
if(checkallupper(sub)==true){
    for(int i=0;i<str.length();i++){
        str[i]=change(str[i]);
    };
};
cout << str << endl;
};
