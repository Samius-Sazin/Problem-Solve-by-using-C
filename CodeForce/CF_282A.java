import java.util.Scanner;

public class CF_282A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int ans = 0;
        for(int i=0; i<n; i++)
        {
            String str = sc.next();
            if(str.charAt(1) == '+')
            {
                ans++;
            }

            else if(str.charAt(1) == '-')
            {
                ans--;
            }
        }

        System.out.println(ans);

        sc.close();
    }
}
