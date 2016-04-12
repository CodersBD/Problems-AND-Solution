#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  unsigned int T,n;
  cin >> T;
  while(T--){
    cin >> n;
    cout << ((n*n)-n)/2 << endl;
  }
  return 0;
}
