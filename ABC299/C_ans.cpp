#include <iostream>
#include <string>
#include <algorithm>

int main() {
    using namespace std;
    unsigned N;
    cin >> N;
    string S;
    cin >> S;

    unsigned ans{};

    for (unsigned flip{}; flip < 2; ++flip) {
        // 極大な右ダンゴ文字列のレベルを列挙する
        unsigned level{};
        for (unsigned i{}; i < N; ++i)
            if (S[i] == '-') {
                // '-' に対応する極大な右ダンゴ列のレベルは、直前までの 'o' の個数
                ans = max(ans, level);
                level = 0;
            } else
                ++level;
        // 文字列を反転
        reverse(begin(S), end(S));
    }

    if (ans)
        cout << ans << endl;
    else
        cout << "-1" << endl;

    return 0;
}
