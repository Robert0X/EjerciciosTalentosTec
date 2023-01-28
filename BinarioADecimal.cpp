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

ll dec(string s){
 ll sum=0;
// debug(s);

    for(ll i=s.size()-1; i>=0 ; i--){
        if(s[i]=='1'){
            ll t=s.size()-i-1;
            sum+=pow(2,t);
  //          debug(sum,i,t);
        }
        else if(s[i]!='0') return-1;
        
    }
    
    return sum;
}

int main(){
  //cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  
  string s;
   
   cout << "Ingresar cadena de ceros y unos: ";
  while(cin >> s){
      //cout << "\n";
      
      if(s[0]=='_') {
          cout << "FIN"; 
          return 0;
      }
      
       ll res=dec(s);
       
      if(res!=-1){
          cout <<"La cadena "<< s << " representa " << res << " en sistema decimal\n";
      }
      else cout << "ERROR, se requiere cadena de ceros y unos\n";
      
      cout << "Ingresar cadena de ceros y unos: ";
  }
  
    
    
  
  return 0;
}
