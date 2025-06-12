#include<bits/stdc++.h>
using namespace std;
#define lint long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
#define output(arr) for(int i=0;i<arr.size();i++){cout<<arr[i]<<" ";}
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.begin(), v.end(), greater<int>())
#define intmax INT_MAX
#define intmin INT_MIN
#define lintmax LLONG_MAX
#define lintmin LLONG_MIN
#define mp(x,y) make_pair(x,y)
// 
lint solvefunction(vector<lint>& arr) {
    int n = arr.size();
    vector<lint> pref(n), suf(n);
    pref[0] = (arr[0] == 2) ? 1 : 0;
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i-1] + (arr[i] == 2 ? 1 : 0);
    }
    suf[n-1] = (arr[n-1] == 2) ? 1 : 0;
    for (int i = n-2; i >= 0; i--) {
        suf[i] = suf[i+1] + (arr[i] == 2 ? 1 : 0);
    }

    for (int k = 1; k < n; k++) {
        if (pref[k-1] == suf[k]) {
            return k;
        }
    }
    return -1;
}


void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<lint>arr;
        forloop(0,n){
            lint x;cin >> x;arr.push_back(x);
        }
        lint ans=solvefunction(arr);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}