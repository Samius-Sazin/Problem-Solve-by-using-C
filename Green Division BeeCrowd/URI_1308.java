import java.util.*;
public class URI_1308 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        
        while(n-- > 0)
        {
            long w = sc.nextLong();
            double ans = (-1 + Math.sqrt(1 + (8.0 * w)))/2.0;
            System.out.println((int)ans);
        }


        sc.close();
    }
}
