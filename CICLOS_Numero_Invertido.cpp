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
  
  string s;
  
  cout << "Dame un numero: ";
  cin >> s;
  
  forex(i,0,s.size()){
  //for(ll i=s.size()-1; i>=0; i--){
      cout << s[i];
      if(i!=0) cout << ", ";
  }
  
  return 0;
}
