// #include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define L(i,j,k) for (int i = j; i <= k; i++)
#define R(i,j,k) for (int i = j; i >= k; i--)
#define vecInt vector<int>

#define push push_back
#define pop pop_back

#define all(x) (x).begin(), (x).end()


int main(){
    
    system("clear");
    
    int i;
    
    L(i , 0,10) cout<< i << endl;
    R(i , 10,0) cout<< i <<endl;
    
    
    vecInt a;
    a.push(5);
    a.push(5);
    a.pop();


    cout<< 2e5<<endl;


    double pi = 3.1415926535;
    cout<< setprecision(4) << pi << endl;
    
    


    // sort(a.begin(), a.end());
    system("clear");
    a.clear();
    a.push(5);
    a.push(2);
    a.push(8);
    sort(all(a));

    for (auto x : a) cout << x << " ";

    
    
    
    
    
    return 0;
}