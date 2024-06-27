import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] arr = new int[3]; // 세 개의 수를 저장할 배열
        
        // 세 개의 수 입력 받기
        for (int i = 0; i < 3; i++) {
            arr[i] = scanner.nextInt();
        }
        
        // 삽입 정렬을 사용하여 배열 정렬
        for (int i = 1; i < 3; i++) {
            int key = arr[i];
            int j = i - 1;
            
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
        
        // 정렬된 배열 출력
        for (int i = 0; i < 3; i++) {
            System.out.print(arr[i] + " ");
        }
        
        scanner.close();
    }
}
