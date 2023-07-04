import java.util.*;

public class URI_1849 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int L1 = sc.nextInt();
        int W1 = sc.nextInt();
        int L2 = sc.nextInt();
        int W2 = sc.nextInt();

        int p = Math.min(L1, W1);
        int q = Math.min(L2, W2);
        int ans1 = Math.max(p, q) * Math.max(p, q);//step 1

        int min_sum = p + q;
        int r = Math.min(Math.max(L1, W1), Math.max(L2, W2));
        int s = Math.min(min_sum, r);
        int ans2 = s * s;//step 2

        int final_ans = Math.max(ans1, ans2);
        System.out.println(final_ans);

        sc.close();
    }
}