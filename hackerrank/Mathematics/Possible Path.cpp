#include <bits/stdc++.h>
using namespace std;

int gcd ( int a, int b )
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
     cout << a << " " << b << endl;
  }
  return b;
}
int main(int argc, char const *argv[]) {
  int T, a, b, x, y;
  cin >> T;
  while (T--){
    cin >> a >> b >> x >> y;
    if (gcd(a,b) == gcd(x,y))
      cout << "YES";
    else
      cout << "NO";
    cout << gcd(a,b) << endl;
  }
  return 0;
}
