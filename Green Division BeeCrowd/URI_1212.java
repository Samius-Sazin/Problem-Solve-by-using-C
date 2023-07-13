import java.util.*;

public class URI_1212 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        while (true) {
            long m = sc.nextLong();
            long n = sc.nextLong();

            if (m == 0 && n == 0)
                break;

            String s1 = Long.toString(m);
            String s2 = Long.toString(n);

            int i = s1.length() - 1;
            int j = s2.length() - 1;
            int carry = 0;
            int count = 0;
            int sum;
            while (i >= 0 && j >= 0)
            {
                sum = ((int) (s1.charAt(i)) - 48) + ((int) (s2.charAt(j)) - 48) + carry;
                carry = sum / 10;
                if (sum >= 10)
                {
                    carry = 1;
                    count++;
                } 
                else
                {
                    carry = 0;
                }
                i--;
                j--;
            }

            while (i >= 0)
            {
                sum = ((int) (s1.charAt(i)) - 48) + carry;
                if (sum >= 10)
                {
                    carry = 1;
                    count++;
                } 
                else
                {
                    carry = 0;
                }
                i--;
            }

            while (j >= 0)
            {
                sum = ((int) (s2.charAt(j)) - 48) + carry;
                if (sum >= 10)
                {
                    carry = 1;
                    count++;
                } 
                else
                {
                    carry = 0;
                }
                j--;
            }

            if (count == 0)
            {
                System.out.println("No carry operation.");
            }
            else
            {
                System.out.println(count + " carry operation.");
            }

        }

        sc.close();
    }
}
