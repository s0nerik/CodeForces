#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
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
    int a,b,c,d,n;
    int res=0;
    cin >> a >> b >> c >> d >> n;
    for(int i=1;i<=n;i++){
        if((i%a==0 || i%b==0 || i%c==0 || i%d==0) && (n>=a || n>=b || n>=c || n>=d)){
            res++;
        };
    };
    cout << res;
    return 0;
};
