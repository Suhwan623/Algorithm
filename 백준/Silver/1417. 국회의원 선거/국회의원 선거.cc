#include <iostream>
#include <queue>


using namespace std;

priority_queue<int> pq;
int n;
int m;

int main() {
    cin >> n;
    cin >> m;
    for(int i = 0; i < n - 1; i++) {
        int a;
        cin >> a;
        pq.push(a);
    }
    int ans = 0;
    while(!pq.empty()) {
        int top = pq.top();
        pq.pop();
        if(top < m) break;
        else {
            pq.push(top - 1);
            m++;
            ans++;
        }
    }
    cout << ans << endl;
}