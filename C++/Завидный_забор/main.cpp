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
    int angle;
    for(int i=0;i<n;i++){
        cin >> angle;
        if(angle>=60){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        };
    };
    return 0;
};
