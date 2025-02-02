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


bool solvefunction(string s,lint k){
    if(s.size()==1){
        return true;
    }
    unordered_map<char,lint>mp;
    forloop(0,s.size()){
        char character = s[i];
        mp[character]++;
    }
    lint oddcnt=0;lint evencnt=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        lint frequency = it->second;
        if(frequency&1){oddcnt++;}
        else{evencnt++;}
    }
    if(k>=oddcnt-1){return true;}else{return false;}

}

void solution(int test){
    while(test--){
        lint n;lint k;string s;
        cin >> n >> k >> s;
        bool ans=solvefunction(s,k);
        if(ans==true){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}