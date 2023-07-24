import java.util.Scanner;
import java.math.BigInteger;
public class URI_1512 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        while(true)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();

            if( a == 0 && b == 0  && c == 0)
            {
                break;
            }

            BigInteger BI_1 = BigInteger.valueOf(b);
            BigInteger BI_2 = BigInteger.valueOf(c);

            BigInteger gcd = BI_1.gcd(BI_2);

            int lcm = (b*c) / gcd.intValue();

            int ans = (a/b) + (a/c) - (a/lcm);

            System.out.println(ans);
        }

        sc.close();
    }
}
