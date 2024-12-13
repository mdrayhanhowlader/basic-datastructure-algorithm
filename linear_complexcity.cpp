#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<map>
#include<sstream>
#include<cctype>
#include<cmath>
#include<bitset>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
            if(i * i != n) cout << n / i << " ";
        }
    }
    return 0;
}