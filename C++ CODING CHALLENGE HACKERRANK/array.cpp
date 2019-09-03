#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int  s=0;
    int v =0;
    cin >>s;
    int arr[s];
    for(int i= 0;i<s;i++){
        cin>>arr[i];

    }
    for(int i = s-1; i>=0; i--){
        cout<< arr[i] <<" ";
    }
    return 0;
}

