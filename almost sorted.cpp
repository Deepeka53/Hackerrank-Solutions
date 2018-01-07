#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,t,k,x=0,b=0,c=0,e=0;
    cin>>n;
    int a[n+2];a[0]=0; a[n+1]=1000001;
    for(i=1;i<=n;i++)
       cin>>a[i];
    for(i=1;i<=n;)
        {
         if(e!=1)
            t=i;
         if(a[i]>a[i+1])
         { ++x;
        while(i<=n-1&&a[i]>a[i+1])
           ++i; 
         k=i; 
          
       } 
         
         if(x==1)
            {
              if(a[k]>a[t-1]&&a[t]<a[k+1])
             {b=t; c=k;}
             else if(k-t==1)
                 {++e;
                 x=-1;}
             else
                 x=3;
             ++x;
             
            }
         if(x>=3)
             break;
        
        
        ++i;
    } 
    if(x>=3)
        cout<<"no";
    else if(e==1&&x==0)
        cout<<"no";
    else if(c-b==1||e==1)
        cout<<"yes\nswap "<<b<<" "<<c;
     else
        cout<<"yes\nreverse "<<b<<" "<<c;
        
        
        
        
        
        
        
    
    return 0;
}

