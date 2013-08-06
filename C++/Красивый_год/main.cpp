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

int factor_digits(int num, int *digits, int limit)
{
    int digits_count = 0;

    if (num == 0) {
        digits[0] = 0;
        return 1;
    }

    while (num > 0 && limit) {
        digits[digits_count++] = num % 10;
        num /= 10;
        limit--;
   }
   return num ? 0 : digits_count;
};

int main()
{
    int a;
    cin >> a;
    int dig[4];
    for(int i=a+1;i<=9999;i++){
        factor_digits(i,dig,4);
        if(dig[0]!=dig[1] &&
           dig[0]!=dig[2] &&
           dig[0]!=dig[3] &&
           dig[1]!=dig[2] &&
           dig[1]!=dig[3] &&
           dig[2]!=dig[3]){
                for(int t=3;t>=0;t--){
                    cout << dig[t];
                };
                break;
        };
    };
    return 0;
};
