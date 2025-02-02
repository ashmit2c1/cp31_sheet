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


lint solvefunction(lint a, lint b, vector<lint>& arr) {
    sort(arr.rbegin(), arr.rend());
    lint time = b;
    lint seconds = 0;
    lint i = 0;
    while (time > 0) {
        time--;
        seconds++; 
        if (time == 0 && i < arr.size()) {
            time = min(arr[i], a); 
            i++; 
        }
    }

    return seconds - 1; 
}
void solution(int test){
    while(test--){
        lint a;lint b;lint n;
        cin >> a >> b >> n;
        vector<lint>arr;
        forloop(0,n){lint x;cin >> x;arr.push_back(x);}
        lint ans=solvefunction(a,b,arr);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}