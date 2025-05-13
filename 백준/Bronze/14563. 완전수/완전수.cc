#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k) {
    vector<int> answer;
    for (int i = 1; i <=k; i++) {
        if (k % i == 0) {
            answer.push_back(i);
        }
    }
    return answer;
}



int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i<t; i++) {
        cin >> n;
        vector<int> answer = solution(n);
        sort(answer.begin(), answer.end());
        int sum  = 0;
        for (int j = 0; j<answer.size() - 1; j ++) {
            sum +=answer[j];
        }
        if (sum == n) {
            cout << "Perfect" << endl;
        }
        else if (sum < n) {
            cout << "Deficient" << endl;
        }
        else cout << "Abundant" << endl;
    }
}