
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


lint solvefunction(string s) {
    lint cnt0=0;
    lint cnt1=0;
    if(s.size()==1){
        return 1;
    }
    forloop(0,s.size()){
        char character = s[i];
        if(character=='0'){cnt0++;}
        if(character=='1'){cnt1++;}
    }
    if(cnt0==cnt1){
        return 0;
    }
    lint index=-1;
    forloop(0,s.size()){
        char character = s[i];
        if(character=='1'){
            if(cnt0>0){
                cnt0--;
            }
            else{
                index=i;break;
            }
        }
        if(character=='0'){
            if(cnt1>0){
                cnt1--;
            }
            else{
                index=i;break;
            }
        }
    }
    return s.size()-index;
}

void solution(int test){
    while(test--){
        string s;cin >> s;
        lint ans=solvefunction(s);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}
