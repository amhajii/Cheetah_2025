// #include <iostream>
#include <bits/stdc++.h>

#define ll long int
#define ui unsigned int
#define f float
#define d double

#define DEBUG(x) cout << #x << " = " << x << endl

#define endl '\n'
#define all(x) x.begin(), x.end()
#define sz(x) (ll)x.size()
#define pb push_back
#define pf push_front
#define mk make_pair
#define mt make_tuple
#define emplace_back emplace_back
#define all(x) (x).begin(), (x).end()
#define SORT(x) sort(all(x))
#define REVERSE(x) reverse(all(x))


// #define L(i , j , k , type:int) for( type i = j; i < k; i++)
#define forLoop(len) for (int i = 0; i < len; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORD(i, a, b) for (int i = (a); i >= (b); i--)
#define FORE(i, x) for (auto &i : (x))

#define vecInt vector<int>

#ifdef DEBUG
#define debug(x) cerr << #x << " = " << (x) << '\n'
#else
#define debug(x)
#endif


const int INF = 1e9 + 7;

using namespace std;



void reads(){


}


// void fast_io() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
// }

void Main(){

    ll a;
    cin >> a;


    vecInt vec1;
    // reads(vec1);

    forLoop(5){
        int x;
        cin >> x;
        vec1.pb(x);
    }

    FORE(i, vec1){
        DEBUG(i);
    }

    // debug(a);

}

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    fast_io();
    Main();
    return 0;
}