#include<bits/stdc++.h>
using namespace std;






// Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.

// dividend = 10, divisor = 3
// ans = 3
// 10 / 3 = 3.3333 which is truncated to 3

// dividend = 7,  divisor = -3
// ans = -2
// 7 / -3 = -2.3333 which is truncated to -2


// int divide(int dividend, int divisor) {
//     int sum = 0;
//     int cnt = 0;
//     while(sum + divisor <= dividend){
//         cnt ++;
//         sum += divisor;
//     }
//     return cnt;
// }

// TC - O(dividend) imagine divided = 2^31 and divisor = 1 then this will take lot of time to count
// it will give TLE
// SC - O(1)



int divide(int dividend, int divisor) {
    if(dividend == divisor){
        return 1;
    }

    // Determine the sign of the result,
    // true for positive, false for negative
    bool sign = true;

    // If dividend is positive and
    // divisor is negative, set sign to negative
    if(dividend >= 0 && divisor < 0){
        sign = false;
    }
    // If dividend is negative and divisor
    // is positive, set sign to negative
    else if(dividend <= 0 && divisor > 0){
        sign = false;
    }

    // Take absolute values
    // of dividend and divisor
    long n = labs((long)dividend);
    long d = labs((long)divisor);

    

    // Initialize quotient to 0
    long quotient = 0;

    // Perform division using
    // repeated subtraction
    while(n >= d){
        // Count how many times divisor can
        // be doubled before exceeding dividend
        int cnt = 0;
        while(n >= (d << (cnt+1))){
            cnt += 1;
        }
        // Add the value corresponding
        // to the current doubling to the quotient
        quotient += 1 << cnt;
        // Subtract the product of divisor
        // and the doubled value from dividend
        n -= (d << cnt);
    }

    // Handle overflow cases
    // If quotient equals (2^31) and the result
    // is supposed to be positive, return INT_MAX
    if(quotient == (1<<31)&&sign){
        return INT_MAX;
    }
    // If quotient equals (2^31) and the result
    // is supposed to be negative, return INT_MIN
    if(quotient == (1 << 31)&& !sign){
        return INT_MIN;
    }
    // Return the quotient with correct sign
    return sign ? quotient: -quotient;
}

// TC - O(log 2 n) *(log 2 n) 
// SC - O(1)

int main(){
    int dividend = 10;
    int divisor = 3;
    cout << divide(dividend, divisor);

}

