import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Stack;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        Stack<Integer> stackInt = new Stack<>();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int n = Integer.parseInt(br.readLine());
        int temp;
        int value;
        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            temp = Integer.parseInt(st.nextToken());
            switch (temp) {
                case 1:
                    value = Integer.parseInt(st.nextToken());
                    stackInt.push(value);
                    break;
                case 2:
                    if (!stackInt.empty())
                        bw.write(stackInt.pop() + "\n");
                    else
                        bw.write("-1\n");
                    break;
                case 3:
                    bw.write(stackInt.size() + "\n");
                    break;
                case 4:
                    if (stackInt.empty())
                        bw.write("1\n");
                    else
                        bw.write("0\n");
                    break;
                case 5:
                    if (!stackInt.empty())
                        bw.write(stackInt.peek() + "\n");
                    else
                        bw.write("-1\n");
                    break;
                default:
                    bw.write("1~5까지만 입력하라고!\n");
                    break;
            }
        }
        bw.flush();
        bw.close();
        br.close();
    }
}