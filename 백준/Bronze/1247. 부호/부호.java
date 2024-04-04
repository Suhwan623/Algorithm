import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        for (int i = 0; i < 3; i++) {
            int a = scanner.nextInt();
            BigInteger sum = BigInteger.ZERO;
            
            for (int j = 0; j < a; j++) {
                BigInteger num = scanner.nextBigInteger();
                sum = sum.add(num);
            }
            
            if (sum.equals(BigInteger.ZERO))
                System.out.println(0);
            else if (sum.compareTo(BigInteger.ZERO) > 0)
                System.out.println('+');
            else
                System.out.println('-');
        }

        scanner.close();
    }
}
