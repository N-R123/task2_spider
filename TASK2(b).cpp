#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,j,q;
    cin >>n>>q;   // take the input of n and q
    int a[n+1];   // create a arrray of size n+1 
    for(j=0;j<=n;j++)
        a[j]=j;   // assign the value of array equal to its index
    while(q!=0)   // starts a loop to run for all quries
    {
        int i; 
        int l,r,val;
        cin >>l>>r>>val;   // take the input of left index,right index and the value to be added as l,r,val
        for(i=l;i<=r;i++)   // starts a loop from left index which run upto right index
            a[i]+=val;   // add the value to each and every array index between the range 
        q--;
    }
    // create a max integer to store maximum element of the array
    int max=0;    // initialize the max with 0
    for(j=0;j<=n;j++)   // starts a loop to find maximum element of the array
    {
        if(a[j]>max)    // if value at index i is greater than the max value then
            max=a[j];   // assign that value to the max
    }
    cout <<max;    // print the max value 
    return 0;
}

