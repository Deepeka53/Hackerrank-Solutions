#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
 
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--)
        {
        int i,j,n,e,a,b,s,k;
        cin>>n>>e;
        int arr[n+1][n+1]={0};
        int fi[n+1]={0};
        list<int> *adj;
        adj = new list<int>[n+1];
        for(i=0;i<e;i++)
        {cin>>a>>b;
         if(arr[a][b]==0)
            {
         adj[a].push_back(b);
         adj[b].push_back(a);
         arr[a][b]=1;
         arr[b][a]=1;
        }
        }
        cin>>s;
        k=s;
         bool *visited = new bool[n+1];
    for(int i = 1; i <= n; i++)
        visited[i] = false;
         list<int> queue;
         visited[s] = true;
    queue.push_back(s);
         
         list<int>::iterator l; 
 
    while(!queue.empty())
    {s = queue.front();
     queue.pop_front();
      for(l = adj[s].begin(); l != adj[s].end(); ++l)
        {
            if(!visited[*l])
            {
                visited[*l] = true;
                queue.push_back(*l);
                fi[*l]=fi[s]+6;
            }
        }
    }
        for(j=1;j<=n;j++)
        {if(j!=k)
        {if(fi[j]==0)
            cout<<"-1"<<" ";
         else
            cout<<fi[j]<<" ";}
        }
        cout<<"\n";
}
         
        
    return 0;
}

