#include<bits/stdc++.h>
using namespace std;




void swap(int a, int b){ 
    cout << "before swap " << " a " << a << " " << " b " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout <<  "after swap " << " a " << a << " " << " b " << b;
} 

int main (){
    int a = 5;
    int b = 6;
    swap(a, b);
}
