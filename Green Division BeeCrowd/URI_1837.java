import java.util.*;

public class URI_1837 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        if (a % b >= 0) {
            System.out.println(a / b + " " + a % b);
            sc.close();
            return;
        }

        int quotient;
        if (a / b > 0) {
            quotient = a / b + 1;
        }

        else if (a / b == 0) {
            if(b<0)
            {
                quotient = 1;
            }
            else
            {
                quotient = -1;
            }
        }

        else {
            quotient = a / b - 1;
        }

        int reminder = a - (b * quotient);

        System.out.println(quotient + " " + reminder);

        sc.close();
    }
}