//#include "debug.h"
#include <bits/stdc++.h>
using namespace std;
#define fore(i, l, r) for (unsigned long long i = l; i < r; i++)
#define ll long long
#define ull unsigned long long
#define f first
#define s second
#define pb push_back
#define pf push_front
#define pq priority_queue
#define mq greater
#define nl "\n"
using ii = pair<int, int>;

vector<int> d_a;

ll divi (ll a){
    ll sum=0;
    int j=0;
    fore(i,1,a+1){
          if(a%i==0) {
              sum+=i;
              d_a.pb(i);
              j=i;
          }
    }
    
    return sum-j;
}

int main(){
  //cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  
  ll a,b;
  cin >> a >> b;
  
  ll sum_a=divi(a);
/*
  for(auto x : d_a){
      cout << x << " ";
  }
  
  cout << nl << nl;
*/  
  ll sum_b=divi(b);
  
/*
   for(auto x : d_a){
      cout << x << " ";
  }
  
  cout << nl << nl;
    cout << " a: " << sum_a << " b: " << sum_b;
*/  
    
  if (sum_a == b && sum_b == a){
      cout << "Son amigos";
  }
  else cout << "No son amigos";
 
  
  return 0;
}
