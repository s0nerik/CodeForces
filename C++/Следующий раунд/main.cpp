#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

ifstream fin("input.txt");
#define cin fin

int main()
{
    int line;
    int n,k;
    cin >> n >> k;
    int nums[n];
    int i=0;
    while (cin>>line){
        nums[i] = line;
        i++;
    };
    int winners=0;
    for (int i=0;i<n;i++){
        if(nums[i]>=nums[k-1] && nums[i]!=0){
            winners++;
        };
    };
    cout << winners;
    return 0;
};
