/*
You are given an array of integers of size N. 
You need to print the sum of the elements in the array.

Note: The range of the 32-bit integer is (−231) to (231−1) or [−2147483648,2147483647].
When we add several integer values, the resulting sum might exceed the above range.
You might need to use long long int in C/C++ or long data type in Java to store such sums.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int a[10] = {0,},sum = 0;
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%lld",&a[i]);
        sum =sum + a[i];
    }
    printf("%lld",sum);
    return 0;
}
