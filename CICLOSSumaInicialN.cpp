#include "debug.h"
#include <bits/stdc++.h>
using namespace std;
#define fore(i, l, r) for (unsigned long long i = l; i < r; i++)
#define forex(i, l, r) for (unsigned long long i = r-1; i >= l; i--)
#define ll long long
#define ull unsigned long long
#define f first
#define s second
#define pb push_back
#define pf push_front
#define pq priority_queue
#define mq greater
using ii = pair<int, int>;


int main(){
  cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  
  ll n, sum=0, ini;
  vector<ll> num;
  cin >> ini >> n;
  
  fore(i,0,n){
      num.pb(ini+i);
      sum+=ini+i;
  }
  
  ll i=0;
  for(auto x : num){
      
      cout << x;
      if(i!=num.size()-1) cout << "+"; 
      i++;
  }
  cout << "=" << sum;
  
  return 0;
}
