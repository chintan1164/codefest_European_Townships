#include <bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("ET_large.txt", "r", stdin);
    freopen("large_output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int q = 0, r = 0, s = 0, h = 0;
        // int a, b, c, d;
        for (int i = 0; i < n; i++)
        {
            // cin >> a >> b >> c >> d;
            // q += a;
            // r += b;
            // s += c;
            // h += d;

            string str;
            cin >>str;

            vector<int> v;
            stringstream ss(str);
            for (int i; ss >> i;)
            {
                v.push_back(i);
                if (ss.peek() == ',')
                    ss.ignore();
            }

             q += v[0];
            r += v[1];
            s += v[2];
            h += v[3];
        }

        float rm = (r * 3) + (s * 4) + (h * 6);

        float time, aq, rq;
        aq = rm * 0.5;
        rq = 3 * aq;
        time = (aq * 2.5 / 1.5) + (rq * 3.25 / 2.25);

        cout << setprecision(2) << fixed << time << "," << aq << "," << rq << endl;
    }
    return 0;
}
