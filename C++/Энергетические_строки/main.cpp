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

int main()
{
    string a;
    cin >> a;
    int len=a.length();
    string heavy = "heavy";
    string metal = "metal";
    int occ=0;
    string b=a;
    while(b.find(heavy) && b.rfind(metal)){
        occ++;
        b.erase(b.find(heavy),5);
        b.erase(b.rfind(metal),5);
    };
    string c=a;
    while(c.find(heavy) && c.find(metal)){
        occ++;
        c.erase(c.find(heavy),5);
        c.erase(c.find(metal),5);
    };
    cout << occ;

    return 0;
};
