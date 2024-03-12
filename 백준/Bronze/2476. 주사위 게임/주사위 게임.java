import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int max = 0;
        for(int i=0; i<n; i++){
            int money = 0;
            int A = in.nextInt();
            int B = in.nextInt();
            int C = in.nextInt();
            if(A == B && B ==C) {
                money = 10000 + (A*1000);
            } else if (A == B) {
                money = 1000 + A * 100;
            } else if (B == C){
                money = 1000 + B * 100;
            } else if (A == C){
                money = 1000 + C * 100;
            }
            else {
                money = Math.max(A, Math.max(B, C)) * 100;
            }
            if (money > max){
                max = money;
            }
        }
        System.out.println(max);
    }
}
