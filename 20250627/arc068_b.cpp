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

    vector<ll> vector(N);
    rep(i, N)
    {
        cin >> vector.at(i);
    }

    sort(vector.begin(), vector.end());
    auto last = unique(vector.begin(), vector.end());
    vector.erase(last, vector.end());

    if (vector.size() % 2 == 0)
    {
        cout << vector.size() - 1 << endl;
    }
    else
    {
        cout << vector.size() << endl;
    }

    return 0;
}
