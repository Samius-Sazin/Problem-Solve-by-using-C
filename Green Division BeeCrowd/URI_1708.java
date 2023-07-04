import java.util.*;

public class URI_1708 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();

        int i = 1;
        int count = 0;
        int m = x, n = y;
        while (n - m < y) {
            m = x * i;
            n = y * i;
            count++;
            i++;
        }
        System.out.println(count);

        sc.close();
    }
}
