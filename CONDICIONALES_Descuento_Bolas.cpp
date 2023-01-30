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

vector<pair<float, string>> bol = {{0.20, "Azul"}, {0.30, "Roja"}, {1,"Blanca"}};

int main(){
  //cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  
  srand(time(NULL));
  
  ll p;
  cout << "Dame el precio de tu compra: ";
  cin >> p;
  
  int al = rand() % (4-1);
  if(al==2){
      cout << "Bola blanca, no tienes ningun descuento, tu pago es de: " << p;
  }
  else cout << "Bola " << bol[al].s << " tu descuento es del " << bol[al].f*100 << "% porciento, tu pago total es de: " << p-(p*bol[al].f);
  
  
  return 0;
}
