#include <iostream>
using namespace std;

int main(){
	int arr[21][21]{};   // 바둑판
	int color = 0, r, c; // 색, 위치

	for(int i = 1;i <= 19;i++)     // 입력받기
		for(int j = 1;j <= 19;j++)
			cin >> arr[i][j];

	// 첫 번째 경우의 수
	for(int i = 1;i <= 19;i++){
		for(int j = 1;j <= 15;j++){
			if(arr[i][j] &&
				arr[i][j] == arr[i][j+1] &&
				arr[i][j+1] == arr[i][j+2] &&
				arr[i][j+2] == arr[i][j+3] &&
				arr[i][j+3] == arr[i][j+4] && // 5개가 가로로 있으면서
				arr[i][j+4] != arr[i][j+5] &&
				arr[i][j] != arr[i][j-1]) {  // 6개가 가로로 놓이지는 않았다면
					color = arr[i][j];
					r = i;
					c = j;
				}
		}
	}

	// 두 번째 경우의 수
	for(int i = 1;i <= 15;i++){
		for(int j = 1;j <= 19;j++){
			if(arr[i][j] &&                 // 바둑알이 있으면서
				arr[i][j] == arr[i+1][j] &&
				arr[i+1][j] == arr[i+2][j] &&
				arr[i+2][j] == arr[i+3][j] &&
				arr[i+3][j] == arr[i+4][j] && // 5개가 세로로 있으면서
				arr[i+4][j] != arr[i+5][j] &&
				arr[i][j] != arr[i-1][j]){  // 6개가 세로로 놓이지는 않았다면
					color = arr[i][j];
					r = i;
					c = j;
				}
		}
	}

	// 세 번째 경우의 수
	for(int i = 1;i <= 15;i++){
		for(int j = 1;j <= 15;j++){
			if(arr[i][j] &&                   // 바둑알이 있으면서
				arr[i][j] == arr[i+1][j+1] &&
				arr[i+1][j+1] == arr[i+2][j+2] &&
				arr[i+2][j+2] == arr[i+3][j+3] &&
				arr[i+3][j+3] == arr[i+4][j+4] && // 5개가 대각선으로 있으면서
				arr[i+4][j+4] != arr[i+5][j+5] &&
				arr[i][j] != arr[i-1][j-1]){  // 6개가 대각선으로 놓이지는 않았다면
					color = arr[i][j];
					r = i;
					c = j;
				}
		}
	}

	// 네 번째 경우의 수
	for(int i = 5;i <= 19;i++){
		for(int j = 1;j <= 15;j++){
			if(arr[i][j] &&                   // 바둑알이 있으면서
				arr[i][j] == arr[i-1][j+1] &&
				arr[i-1][j+1] == arr[i-2][j+2] &&
				arr[i-2][j+2] == arr[i-3][j+3] &&
				arr[i-3][j+3] == arr[i-4][j+4] && // 5개가 대각선으로 있으면서
				arr[i-4][j+4] != arr[i-5][j+5] &&
				arr[i][j] != arr[i+1][j-1]){  // 6개가 대각선으로 놓이지는 않았다면
					color = arr[i][j];
					r = i;
					c = j;
				}
		}
	}

	cout << color << '\n';
	if(color)
		cout << r << ' ' << c;
}