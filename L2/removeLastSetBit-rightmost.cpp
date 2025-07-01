#include<bits/stdc++.h>
using namespace std;



// optimal 

void removeLastSetBit(int n){
    
    cout << (n & n-1);
}


int main (){
    int n = 40;

    removeLastSetBit(n);

}
