import java.util.Scanner;
public class URI_2874 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        while(sc.hasNextInt())
        {
            StringBuilder sb = new StringBuilder();
            int n = sc.nextInt();
            sc.nextLine();
            while(n-- > 0)
            {
                String str = sc.next();

                int i = str.length();
                int dec = 0;
                int x = 1;
                while(i > 0)
                {
                    dec += x * ((int)str.charAt(i-1) - 48);
                    x *= 2;
                    i--;
                }
                sb.append((char)dec);
            }
            System.out.println(sb);
        }

        sc.close();
    }
}
