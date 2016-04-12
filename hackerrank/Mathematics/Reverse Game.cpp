#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int T,n,k,index;
  cin >> T;
  while (T--) {
    cin >> n >> k;
    if(n%2==0)
        {
        if(k<n/2)
            {index=2*k+1;}
        else if (k>n/2)
          {index=2*(n-1-k);}
    }
    else if (n%2!=0)
        {
        if(k<(n-1)/2)
            {index=2*k+1;}
        else if(k>=(n-1)/2)
            {index=2*(n-1-k);}
        }
    cout<<index<<endl;
    cout << index << endl;
  }
  return 0;
}
