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
    stack<int> st;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(s=="push"){
            int t;
            cin >> t;
            st.push(t);
        }
        if(s=="pop"){
            if(st.empty()) cout << "-1"<<'\n';
            else { cout << st.top() << '\n'; st.pop(); }
        }
        if(s=="size") cout << st.size() << '\n';
        if(s=="empty") cout << st.empty() << '\n';
        if(s=="top"){
            if(st.empty()) cout << "-1" << '\n';
            else cout << st.top() << '\n';
        }
    }
}
