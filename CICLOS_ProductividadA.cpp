#include "debug.h"
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
using ii = pair<int, int>;

vector<pair<string,int>> ms = { {"Enero", 15}, {"Febrero", 15}, {"Marzo", 15}, {"Abril", 17}, {"Mayo", 17}, {"Junio", 17}, {"Julio", 19}, {"Agosto", 19}, {"Septiembre", 20}, {"Octubre", 20}, {"Noviembre", 20}, {"Diciembre", 21} };
vector<ll> prm;
ll res=0;

int main(){
  //cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  
  for(auto x : ms){
      ll tem;
      cout << "Dame la cantidad de producciones en " <<x.f << " ";
      cin >> tem;
      
      res+=tem*x.s;
      prm.pb(tem*x.s);
      
      //debug(res);
      cout << "\n";
  }
    
  cout << "La productividad anual es de: " << res;
  
  return 0;
}
