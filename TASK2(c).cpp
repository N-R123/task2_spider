#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,n,m;
    cin >>n>>m;   // take input of n and m
    int brk[m];   // create a array to store the broken steps
    int steps[n+1];   // create a array of size n+1 which contains the number of ways to reach a particular stair denotes by index 
    for(i=0;i<m;i++)   // starts a loop to take the broken steps 
    cin >>brk[i];
    steps[0]=1;   // set the ground step as 1
    if(m!=0)   // if m!=0 then
    {
    if(brk[0]==1)   // if first broken step is at 1st stair
    {
        steps[1]=0;  // set steps[1] as 0
        int k=1;
     for(i=2;i<=n;i++)   // starts the loop from 2 which run upto n
     {
         if(i==brk[k])   // if i is equal to the broken steps stored at index k
         {
             steps[i]=0;   // set steps[i] as 0
             k++;   // incremented the index of the brk array which store position of broken stairs
         }
         else
        {
            // else,steps at index i is equal to sum of the steps at index i-1 and i-2
        steps[i]=(steps[i-1]+steps[i-2])%1000000007;  // if the steps[i] is a large number then take its modulo 10^9+7
        }
     }
    }
    else
    {
    steps[1]=1;   // set steps[1] as 1 
    int k=0;
    for(i=2;i<=n;i++)   // starts the loop from 2 which run upto n
    {
        if(i==brk[k])    // if the i is equal to the broken steps stored at index k
        {
             steps[i]=0;   // set steps[i] as 0
             k++;   // incremented the index of the brk array which store position of broken stairs
        }
        else
        {
            // else,steps at index i is equal to sum of the steps at index i-1 and i-2
        steps[i]=(steps[i-1]+steps[i-2])%1000000007;  // if the steps is a large number then take its modulo 10^9+7
        }
     }
    }
    }
    else
    {
        steps[1]=1;   // set steps[1] as 1 
        for(i=2;i<=n;i++)   // starts the loop from 2 which run upto n
        {
            // steps at index i is equal to sum of the steps at index i-1 and i-2
        steps[i]=(steps[i-1]+steps[i-2])%1000000007;  // if the steps is a large number then take its modulo 10^9+7
        }
    }
    cout <<steps[n];   // print the last value of steps array which is the total number of ways to reach the nth stair
    return 0;
}
