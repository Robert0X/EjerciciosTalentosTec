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
  cout << "Dame la cantidad de numeros: ";
  cin >> n;
  
  ll may=0,men=0,pro=0;
  
  ll j=0;
  fore(i,0,n){
      ll t;
      cin >> t;
      
      if(t!=0){
          
          if(t>may) may=t;
          if(t<men) men=t;
          else if(j==0) men=t;
          pro+=t;
          j++;
      }
  }
  
  cout << "Mayor: " << may << " Menor: " << men << " Promedio: " << pro/j;
  
  return 0;
}
