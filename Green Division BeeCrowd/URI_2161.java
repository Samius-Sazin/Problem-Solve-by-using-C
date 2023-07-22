import java.util.*;
public class URI_2161 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        double ans = 0;

        while(n-- > 0)
        {
            ans += 6;
            ans = 1/ans;
        }

        ans += 3;
        System.out.printf("%.10f\n", ans);

        sc.close();
    }
}