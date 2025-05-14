#include <iostream>
#include <cstring>
using namespace std;

int sum = 0;
int recursion(const char *s, int l, int r) {
    sum ++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);

}

int isPalindrome(const char *s) {
    sum = 0;
    return recursion(s, 0, strlen(s)-1);
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        char s[1001];
        cin >> s;
        cout << isPalindrome(s) << " " << sum << endl;
    }
    return 0;
}
