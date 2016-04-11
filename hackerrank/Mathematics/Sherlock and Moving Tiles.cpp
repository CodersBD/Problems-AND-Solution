#include <bits/stdc++.h>
#define bla cos(M_PI/4)
using namespace std;
int main(int argc, char const *argv[]) {
  long int L,S1,S2,Q,qi;
  long double vofqi;
  cin >> L >> S1 >> S2;
  cin >> Q;
  while(Q--){
    cin >> qi;
    if(S1 < S2)
      swap(S1, S2);
    vofqi = (S1-S2)*bla;
    cout << setprecision(20) << fixed << (L-sqrt(qi))/vofqi << endl;
  }
  return 0;
}
