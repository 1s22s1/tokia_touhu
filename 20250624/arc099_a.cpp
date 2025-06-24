#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    int N, K;
    cin >> N >> K;

    rep(i, N)
    {
        ll a;
        cin >> a;
    }

    if (N <= K)
    {
        cout << 1 << endl;

        return 0;
    }

    ll answer = (N - K) / (K - 1) + 1;

    if ((N - K) % (K - 1) != 0)
    {
        answer++;
    }

    cout << answer << endl;

    return 0;
}
