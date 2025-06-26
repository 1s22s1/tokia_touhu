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

    vector<ll> vector(3);

    rep(i, 3)
    {
        cin >> vector.at(i);
    }

    sort(vector.begin(), vector.end(), greater<ll>());

    ll diff = abs(vector.at(0) - vector.at(1)) + abs(vector.at(0) - vector.at(2));

    ll answer = diff / 2;

    if (answer % 2 == 1)
    {
        answer += 2;
    }

    cout << answer << endl;

    return 0;
}
