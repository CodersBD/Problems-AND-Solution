#include <bits/stdc++.h>
using namespace std;
int gcd ( int a, int b )
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}
int main(int argc, char const *argv[]) {
  int T,l,b,gcdof_lb;
  cin >> T;
  while (T--) {
    cin >> l >> b;
    gcdof_lb = gcd(l,b);
    cout << (l*b)/(gcdof_lb*gcdof_lb) << endl;
  }
  return 0;
}

