import java.util.Scanner;

public class URI_1221 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-- > 0)
        {
            int prime = sc.nextInt();

            if(prime == 0 || prime == 1)
            {
                System.out.println("Not Prime");
                continue;
            }
            if(prime == 2)
            {
                System.out.println("Prime");
                continue;
            }

            int c = 0;
            for(int i=2; i<=Math.sqrt(prime); i++)
            {
                if(prime % i == 0)
                {
                    c++;
                }
            }
            if(c == 0)
            {
                System.out.println("Prime");
            }
            if(c > 0)
            {
                System.out.println("Not Prime");
            }
            
        }

        sc.close();
    }
}
