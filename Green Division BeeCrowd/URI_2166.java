import java.util.*;
public class URI_2166 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        double ans = 0;

        while(n-- > 0)
        {
            ans += 2;
            ans = 1/ans;
        }

        ans += 1;
        System.out.printf("%.10f\n", ans);

        sc.close();
    }
}