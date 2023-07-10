import java.util.*;

public class URI_1987 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextInt()) {
            int n = sc.nextInt();
            int m = sc.nextInt();

            int sum = 0;

            while(n-- > 0)
            {
                sum += m%10;
                m /= 10;
            }

            if (sum % 3 == 0) {
                System.out.println(sum + " sim");
            }

            else if (sum % 3 != 0) {
                System.out.println(sum + " nao");
            }

            else {
                System.out.println("Presentation Error");
            }
        }

        sc.close();
    }
}