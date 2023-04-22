#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
int main(){
  int n;
  cin >> n;
  vector<char> s(n);
  rep(i, n) cin >> s.at(i);
  int max_e = -1;
  int count = 0;
  int loop = 0;
  rep(i, n){
    /*
    --oo--oooooのような、oで終わり、レベルが最大のdango文字列を例外的に検出するために、if(i == n-1)以下のコードを書いた
    */
        if (i == n-1 && s.at(n-1) == 'o' && loop >= 1){
        max_e = max(max_e, count+1);
        }
        if(s.at(i) == 'o'){
            count++;
        }
        if (s.at(i) == '-')
        {
            max_e = max(max_e, count);
            count = 0;
            loop++;
        }
        
        
    }
  if(max_e == 0){
    cout << -1 << endl;
  }
  else{
  cout << max_e << endl;
  }
}