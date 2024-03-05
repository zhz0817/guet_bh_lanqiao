import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
// 1:无需package
// 2: 类名必须Main, 不可修改

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        StringBuffer sb = new StringBuffer();
        while (n>0){
            n--;
            int temp = n%26;
            n/=26;
            sb.append((char) (temp+'A'));
        }
        sb.reverse();
        System.out.println(sb);
        //在此输入您的代码...
        scan.close();
    }
}