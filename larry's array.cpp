#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,i,b,c,d,n,x,l,k,j;
    cin>>t;
    for(i=0;i<t;i++)
    { cin>>n; int a[n];
         c=0;
        for(j=0;j<n;j++)
             { cin>>b;
              k=0;
              while(k<j)
                  {if(a[k]>b)
                  ++c;
                  ++k;}
              a[j]=b;
             }
          
        
        
         if(c%2==0)
             cout<<"YES\n";
             else
                 cout<<"NO\n";}
        
    return 0;
}

