#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>
#include <map>
#include <set>
#include <math.h>
#include <numeric>
#include <cassert>
#include <stack>
#include <cstring>
#include <climits>

typedef long long ll;
typedef unsigned long ull;

#define interface struct
#define zx3f 1061109567

typedef signed char i8;
typedef short i16;
typedef int i32;
typedef long long i64;

using namespace std;

struct Pos
{
    int x;
    int y;
};
vector<int> vt;
int map1[30][30], v[30][30];
int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
int ans[30][30], cnt, dcnt;
void dfs(int x, int y)
{
    v[x][y] = 1;
    dcnt++;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i], ny = y + dy[i];
        if (map1[nx][ny] && !v[nx][ny])
        {
            dfs(nx, ny);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < n; j++)
            map1[i + 1][j + 1] = str[j] - '0';
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (map1[i][j] && !v[i][j])
            {
                dfs(i, j);
                cnt++;
                vt.push_back(dcnt);
                dcnt = 0;
            }
        }
    }
    sort(vt.begin(), vt.end());
    cout << cnt << '\n';
    for (int i = 0; i < vt.size(); i++)
        cout << vt[i] << '\n';
}