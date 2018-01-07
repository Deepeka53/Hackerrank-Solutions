#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector> 
#include <list>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <fstream>
#include <ctime>
#include <cassert>

using namespace std; // }}}
vector<vector<long long> >pairs;
vector<int>visit;
int x;
void func(long long v)
{
   
    visit[v] = 1;
    ++x;
    vector<long long>::iterator i;
    for (i = pairs[v].begin(); i != pairs[v].end(); ++i)
        if (visit[*i]==0)
            func(*i);
           
}
 
int main()
{ 
    long long N, I,i,y,j;
    cin >> N >> I;
    pairs = vector<vector<long long> >(N);
    visit = vector<int>(N);
    
    for (i = 0; i < I; ++i) {
        long long a, b;
        cin >> a >> b;
        pairs[a].push_back(b);
        pairs[b].push_back(a);
    }
    
    long long result = N*(N-1)/2;
    for(i=0;i<N;i++)
        {if(visit[i]==0)
         {x=0;
         func(i);
         result=result-x*(x-1)/2;}
         }
       
    
    /*for(i=0;count[i]!=0;i++)
        for(j=i+1;count[j]!=0;j++)
          result+=count[i]*count[j];*/
       
    
    
    
    
    cout << result << endl;
    return 0;
}

