#include "debug.h"
#include <bits/stdc++.h>
using namespace std;
#define fore(i, l, r) for (unsigned long long i = l; i < r; i++)
#define forex(i, l, r) for (long long i = r-1; i >= l; i--)
#define ll long long
#define ull unsigned long long
#define f first
#define s second
#define pb push_back
#define pf push_front
#define pq priority_queue
#define mq greater
using ii = pair<int, int>;

ll pot(ll num, int po){
 
 ll r=num;  
    fore(i,0,po-1){
      r*=num;  
    }
    return r;
}


int main(){
  //cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  
  ll n,p;
  
  cout << "Dame el numero: ";
  cin >> n;
  cout << "Dame la potencia: ";
  cin >> p;
  
  cout << pot(n,p);
  
  
  return 0;
}
