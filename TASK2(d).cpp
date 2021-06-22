#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N,i;
    cin >>N;   // take the input of the length as N
    int unknown[N],known[N-1];   // define the arrays
    
    cin >>known[0];  // take the input of the index 0 of known array 
    unknown[0]=unknown[1]=known[0];  // assign the value of unknown array at index 0 and 1 to the value of known array at                                        index 0 
    
    for(i=1;i<N-1;i++)   // starts a loop from 1 to n-2
    {
        cin >>known[i];   // take the input of remaining values of known array 
        if(unknown[i]>known[i])   // if at index i,the value of unknown array is greater than the value of known array
        {  
            unknown[i]=known[i];   // assign the value of unknown at index i to the value of known array at that index
        }
        unknown[i+1]=known[i];   // assign the value of unknown at index (i+1) to the value of known array at index i
    }
      //create a integer max_sum to store the maximum sum of unknown array
    int max_sum=0;   // initialize it with 0
    for(i=0;i<N;i++)
        max_sum+=unknown[i];  // sum all the elements of unknown array and
    cout <<max_sum;     // print the maximum sum
    return 0;
}

