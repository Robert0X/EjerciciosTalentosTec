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
#define nl cout<<"\n"
using ii = pair<int, int>;

string voc = "AEIOU";
string con = "QWRTYPSDFGHJKLZXCVBNM";
string nume = "0123456789";


ll random (ll l, ll r){
    //srand(time(nullptr));
    return l + rand() % ((r+1)-l);
}

int main(){
  //cin.tie(0)->sync_with_stdio(0), cout.tie(0);
  
  
  fore(j,0,100){
      
  //srand(time(NULL));
  string placa = "         ";
  placa[3]=placa[7]='-';
  
  fore(i,0,2){
    //  debug(placa,i);
      placa[i] = con[random(0,18)]; 
  }
  //debug(placa);
  
  fore(i,4,7){
      //debug(placa,i);
      placa[i]=nume[random(0,9)];
  }
  placa[2]=voc[random(0,4)];
  placa[8]=voc[random(0,4)];
  
  debug(placa);
  }
  
  return 0;
}
