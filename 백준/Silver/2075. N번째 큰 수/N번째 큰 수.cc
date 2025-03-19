#include <iostream>
#include <algorithm>

using namespace std;

int arr[2250010];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); // cin은 속도가 느리기 때문에 속도 증가
    cout.tie(NULL); // 위 코드랑 똑같음
    int n;
    cin >> n;
    for (int i = 0; i < n * n; i++)
    {
        cin >> arr[i]; //만약 n이 5라면 25개 숫자를 배열에 저장
    }
    sort(arr, arr + n * n); // 배열 0번째 인덱스부터 25번까지 정렬
    cout << arr[n * n - n] << endl; // 배열 25번 - 5 = 20번인덱스
    return 0;
}