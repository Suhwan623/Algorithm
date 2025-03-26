#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; // 정수 개수
    cin >> n;
    vector<int> v(n); //동적 배열 사용 , vector를 사용하면 입력받는 n의 수에 따라 자동으로 배열 크기가 조정됨 ex n이 4면 vector의 크기도 4
    for(int i = 0; i < n; i++) // n개만큼 입력받아서 배열에 저장함함
        cin >> v[i];

    sort(v.begin(), v.end()); // 정렬함수 v의 시작부터 v의 끝까지
    v.erase(unique(v.begin(), v.end()), v.end()); // unique를 사용하여 배열의 앞쪽으로 중복된 값 몰아넣기, // erase를 사용하여 중복된 원소를 제거

   for (int i = 0; i < v.size(); i++) { // 0부터 배열의 사이즈만큼 반복
    cout << v[i] << " "; //  오름차순 한 결과 출력
     } 
} 

