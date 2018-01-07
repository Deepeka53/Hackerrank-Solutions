#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int term(int n,int k)
{ int a[n+1]={0},i;
 a[0]=-1;
        for(i=1;i<=n;i++)
            {
                
           if(i-k<=0)
            { if(a[i+k]!=0)
                {cout<<"-1"<<endl;
                return 0;}
             else
                 a[i+k]=i;
                
            }
            else
               {if(a[i-k]==0)
                   a[i-k]=i;
              else
              {if(i+k<=n&&a[i+k]==0)
                  a[i+k]=i;
               else{cout<<"-1"<<endl;
                   return 0;}
            }
        
        }
        }
          for(i=1;i<=n;i++)
                cout<<a[i]<<" ";
             cout<<endl;
            
     return 0;
            
        
    }
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        term(n,k);
    } 
    return 0;
}

