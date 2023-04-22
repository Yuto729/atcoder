#include <iostream>
#include <utility>
using namespace std;
/*
解法は同じだが、pair型を使って効率的に処理している。
*/
int n, t;
int c[200001], r[200001];

int main(void)
{
  cin >> n >> t;
  for(int i = 1; i <= n; i++) cin >> c[i];
  for(int i = 1; i <= n; i++) cin >> r[i];
  /*
  pair型・・・2つの型の組み合わせ
  */
  pair<int, int> tmax = {-1, -1}, lmax = {-1, -1};
  for(int i = 1; i <= n; i++){
    /*
    pairとmaxの組み合わせでは、firstで比べられる。ここでは、r[i]とtmaxで比べ、大きい方の
    iを保存
    */
    if(c[i] == t) tmax = max(tmax, {r[i], i});
    if(c[i] == c[1]) lmax = max(lmax, {r[i], i});
  }
  /*
  tmax.first == -1のとき、c[i] == tとなるiが存在しない
  */
  if(tmax.first != -1) cout << tmax.second << endl;
  else cout << lmax.second << endl;
  
  return 0;
}  
