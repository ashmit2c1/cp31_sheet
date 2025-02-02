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



lint solvefunction(lint a,lint b,lint kingX,lint kingY,lint queenX,lint queenY){
    lint arrX[8] = {a,a,-a,-a,b,b,-b,-b};
    lint arrY[8] = {b,-b,b,-b,a,-a,a,-a};
    set<pair<lint,lint>>kingPositions;
    forloop(0,8){
        lint newX = kingX+arrX[i];
        lint newY = kingY+arrY[i];
        kingPositions.insert({newX,newY});
    }
    set<pair<lint,lint>>queenPositions;
    forloop(0,8){
        lint newX = queenX+arrX[i];
        lint newY = queenY+arrY[i];
        queenPositions.insert({newX,newY});
    }
    lint cnt=0;
    for(auto it=kingPositions.begin();it!=kingPositions.end();it++){
        if(queenPositions.find(*it)!=queenPositions.end()){
            cnt++;
        }
    }
    return cnt;
    
}

void solution(int test){
    while(test--){
        lint a;lint b;cin >> a >> b;
        lint kingx;lint kingy; cin >> kingx >> kingy;
        lint queenx; lint queeny; cin >> queenx >> queeny;
        lint ans=solvefunction(a,b,kingx,kingy,queenx,queeny);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}