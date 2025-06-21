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

    int N;
    cin >> N;

    vector<int> D(N - 1);
    rep(i, N - 1)
    {
        cin >> D.at(i);
    }

    rep(i, N)
    {
        int total_distance = 0;

        for (int j = i; j < N - 1; j++)
        {

            total_distance += D.at(j);
            cout << total_distance << " ";
        }

        cout << endl;
    }

    return 0;
}
