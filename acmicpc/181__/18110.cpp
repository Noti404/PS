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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int arr[300001] = { 0, };
    int n;
    cin >> n;
    if(n==0){
        cout << "0";
        return 0;
    }
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int ans = 0; // 정답 저장
    double tmp = floor(n*0.15 + 0.5);
    for(int i=tmp; i<n-tmp; i++){
        ans += arr[i];
    }
    // cout << "ans :" << ans << '\n';
    // cout << "n-tmp*2 :" << n-tmp*2 << '\n';
    cout << floor(ans/(n-tmp*2) + 0.5);
}
