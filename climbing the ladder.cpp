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


int main(){
    int n,a;
    cin >> n;
    vector<int> scores(n);
    scores[0] = 0;
    int k=0;
    for(int i=1;i<=n;i++){
       cin >> a;
         if(a != scores[k])
         {k++;
         scores[k]=a;}
       }
    int m;
    cin >> m;
    vector<int> alice(m);
    for(int alice_i = 0;alice_i < m;alice_i++){
       cin >> alice[alice_i];
    }
    // your code goes here
     
    for(int i = 0;i < m;i++)
    {while(k>1 && alice[i] > scores[k])
    {
        k--;
    }
    if(alice[i]>=scores[k])
    cout<<k<<endl;
    else
    cout<<k+1<<endl;}
    return 0;
}

