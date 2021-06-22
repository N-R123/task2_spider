#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

//declare a function to calculate the length of the longest proper prefix bracket sequence 
void chk(string s){
    int n=s.size();
    stack<char> st;   // create a stack "st" 
    int i,count=0,total_length=0;  // starting the count from 0
    for(i=0;i<n;i++)   // use a loop 
    {
        if(s[i]=='<')   // if open bracket'<' comes then push it into the stack and incremented the count
        {
        st.push(s[i]);
        count++;
    }
    else{
        if(s[i]=='>')   // if close bracket'>' comes then check whether the stack is empty or not and what wil be at top of the stack
        { 
        if(!st.empty() && st.top()=='<')   // if stack is empty and at top of stack open bracket '<' is present
        {
        st.pop();   // then pop the '<'
        if(st.empty())  // if after the poping,stack is empty then 
            {
                total_length+=count;  // add the count to total_length,if previously any sub sequence of bracket occurs
                count=0;   // and again set the count to 0 
            }
        }
        else   // else break the loop since the sequence of bracket ends
        break;
    }
}
}
cout <<total_length*2<<endl;   // print the length of the proper prefix bracket sequence
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;  // take input of the testcases
    while(t!=0)  // starts a while loop to check for every case
    {
    string s;
    cin>>s;   // take the string 
    chk(s);   // call the chk function 
        t--;  
    }
    return 0;    
}

