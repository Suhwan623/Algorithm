#include <iostream>
#include <queue>

using namespace std;
int main() {
    int n;
    cin >> n;
    queue<int> q;
    queue<int> q2;
    for (int i = 1; i<=n; i++) {
        q.push(i);
    }
    while (q.size() > 1) {
        q2.push(q.front());
        q.pop();

        int front = q.front();
        q.pop();
        q.push(front);
    }

    while (!q2.empty()) {
        q2.pop();
    }
    if (q.size() <= 1) {
        cout << q.front();
    }
    return 0;
}