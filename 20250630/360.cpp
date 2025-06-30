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

    ll X, A0, A1, A2, A3;
    cin >> X >> A0 >> A1 >> A2 >> A3;

    ll answer = 0;
    ll division = 0;

    division = min(X / 50, A0);
    answer += division;
    X -= 50 * division;

    division = min(X / 10, A1);
    answer += division;
    X -= 10 * division;

    division = min(X / 5, A2);
    answer += division;
    X -= 5 * division;

    answer += X;

    cout << answer << endl;

    return 0;
}
