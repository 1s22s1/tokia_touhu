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

    ll N;

    cin >> N;

    ll answer = 0;

    rep(i, N)
    {
        ll A, B;
        cin >> A >> B;

        if (A < B)
        {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
