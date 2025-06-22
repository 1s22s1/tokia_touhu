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

    string S;
    cin >> S;

    vector<int> white_indexes, black_indexes;

    int white_count = count(S.begin(), S.end(), 'W');
    int black_count = S.size() - white_count;

    rep(i, S.size())
    {
        if (S.at(i) == 'W')
        {
            if (white_count <= i)
            {
                white_indexes.push_back(i);
            }
        }
        else
        {
            if (i < white_count)
            {
                black_indexes.push_back(i);
            }
        }
    }

    int answer = 0;

    rep(i, white_indexes.size())
    {
        answer += abs(white_indexes.at(i) - black_indexes.at(i));
    }

    cout << answer << endl;

    return 0;
}
