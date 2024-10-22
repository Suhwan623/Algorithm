
#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	
	while(t--){ // t번 반복 
		int a, b, gcd, lcm; // gcd = 최대공약수, lcm = 최소공배수 
		
		cin >> a >> b;
		
		int i = a; // 최소공배수를 구하는 과정 
		while(1){
			if(i % a == 0 && i % b == 0){ // 만약 공배수면 
				lcm = i; // 저장하고 
				break; // 바로종료 
			}
			i++;
		}
		
		for(i = 1;i <= a;i++){ // 최대공약수를 구하는 과정 
			if(a % i == 0 && b % i == 0) // 만약 공약수면 
				gcd = i; // 저장 
		}
		
		cout << lcm << ' ' << gcd << '\n';
	} 
	
}