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
    while(1){
        string tmp;
        cin >> tmp;
        if(tmp == "0") return 0;
        int middle = (tmp.length()-1)/2;
        string t1="", t2="";
        if(tmp.length() % 2 == 0){
            for(int i=0; i<=middle; i++){
            t1 += tmp[i];
        }
        for(int i=tmp.length()-1; i>middle; i--){
            t2 += tmp[i];
        }
        }
        else {
            for(int i=0; i<middle; i++){
            t1 += tmp[i];
        }
        for(int i=tmp.length()-1; i>middle; i--){
            t2 += tmp[i];
        }
        }
        
        // cout << t1 << " / " << t2 << '\n';
        if(t1 == t2){
            cout << "yes" << '\n';
        }
        else cout << "no" << '\n';
    }
}
