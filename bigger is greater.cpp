#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    string a;
    cin>>t;
    while(t--)
        {
        cin>>a;
        
        if(next_permutation(a.begin(),a.end()))
            cout<<a<<"\n";
         else 
             cout<<"no answer\n";
     }
    return 0;
}

