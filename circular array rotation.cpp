#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,r,q,s,d,i=0;
    scanf("%d %d %d",&n,&r,&q);
    int a[n];
    if(r>n)
        s=r%n;
    else
    s=i+r;
    for(i=s;i<n;i++)
        cin>>a[i];
    if(s!=0)
  { for(i=0;i<s;i++)
      cin>>a[i];}
    for(i=0;i<q;i++)
    {scanf("%d",&d);
     cout<<a[d]<<endl;}
    return 0;
}

