#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    int N, Q;
    cin >> N >> Q;

    vector<int> A(N);
    rep(i, N)
    {
        A.at(i) = i + 1;
    }

    int offset = 0;
    int type, p, x;

    rep(i, Q)
    {
        cin >> type;

        switch (type)
        {
        case 1:
            cin >> p >> x;

            A.at((p - 1 + offset) % N) = x;

            break;
        case 2:
            cin >> p;

            cout << A.at((p - 1 + offset) % N) << endl;

            break;
        case 3:
            int k;
            cin >> k;

            offset += k;
            offset %= N;

            break;
        }
    }

    return 0;
}
