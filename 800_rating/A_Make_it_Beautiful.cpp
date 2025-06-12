#include <bits/stdc++.h>
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

bool solvefunction(vector<lint>& arr, vector<lint>& answer) {
    lint maxel = *max_element(arr.begin(), arr.end());
    lint minel = *min_element(arr.begin(), arr.end());
    if (maxel == minel) {
        return false;
    }
    lint left = 0;
    lint right = arr.size() - 1;
    lint index = 0;
    while (index < arr.size()) {
        answer[index] = arr[left];
        index += 2;
        left++;
    }
    index = 1;
    while (index < arr.size()) {
        answer[index] = arr[right];
        index += 2;
        right--;
    }
    return true;
}

void solution(int test) {
    while (test--) {
        lint n;
        cin >> n;
        vector<lint> arr;
        forloop(0, n) {
            lint x;
            cin >> x;
            arr.push_back(x);
        }
        vector<lint> answer(arr.size());
        bool ans = solvefunction(arr, answer);
        if (ans == true) {
            print("YES")
            forloop(0, answer.size()) {
                cout << answer[i] << " ";
            }
            cout << "\n";
        } else {
            print("NO")
        }
    }
}

int main() {
    int test;
    cin >> test;
    solution(test);
}
