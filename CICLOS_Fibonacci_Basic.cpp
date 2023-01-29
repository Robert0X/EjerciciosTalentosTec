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


int main(){
  //cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  
  ll n;
  cout << "Dame la cantidad de numeros a generar de Fibonacci: ";
  cin >> n;
  
  ll f=1, z=0, x=1;
  
  fore(i,0,n){
      
      f=z+x;
      cout << f << " ";
      
      z=x;
      x=f;
  }
  
  
  return 0;
}
