//#include "debug.h"
#include <bits/stdc++.h>
using namespace std;
#define fore(i, l, r) for (unsigned long long i = l; i < r; i++)
#define forex(i, l, r) for (unsigned long long i = r; i >= l; i--)
#define ll long long
#define ull unsigned long long
#define f first
#define s second
#define pb push_back
#define pf push_front
#define pq priority_queue
#define mq greater
using ii = pair<int, int>;


deque<char> bina(int n){
    
    string r;
    deque<char> j;

    while (n != 0){
        j.pf ( n % 2 == 0 ? '0' : '1' );
        n /= 2;
    }
    return j;
}

int main(){
  //cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  
 // int n=-1;
  
  ll k;
  
  cout << "Ingrese valor entero: ";
  cin >> k;
  
  while(k!=0){
      
      cout << k << " en binario es ";
      
      deque<char> o = bina(k);
  
      while(!o.empty()){
         cout << o.front() << " ";
         o.pop_front();
      }
      
      cout << "\nIngrese valor entero: ";
      cin >> k;
  }
  
  cout << "FIN";
  
  return 0;
}
