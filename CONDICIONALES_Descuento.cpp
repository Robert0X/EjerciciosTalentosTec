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
  
  ll ed, sem;
  double pag;
  
  cout << "Dame tu edad: ";
  cin >> ed;
  cout << "Dame la cantidad del pago normal: ";
  cin >> pag;
  cout << "Dame el semestre al que te inscribiras: ";
  cin >> sem;
  
  if(ed<=18 || sem<2)
      cout << "Tu no eres acreedor a un descuento, pago total de: " << pag; 
  else{
      double des=(ed-18)*(0.015);
      cout << "Tu pago total con el descuento aplicado sera de: " << pag-(pag*des);
  } 
  
  return 0;
}
