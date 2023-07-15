import java.util.*;

public class URI_1028 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for(int j=0; j<t; j++)
        {
            int x = sc.nextInt();
            int y = sc.nextInt();

            while(y != 0)
            {
                int rem = x % y;
                x = y;
                y = rem;
            }

            System.out.println(x);
        }

        sc.close();
    }
}