import java.util.Scanner;
public class URI_1515 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n;
        String s = "";
        while((n=sc.nextInt()) != 0)
        {
            int min = Integer.MAX_VALUE;
            while(n-- > 0)
            {
                String str = sc.next();
                int y = sc.nextInt();
                int t = sc.nextInt();

                int year = y - t;
                min = Math.min(min, year);
                if(min == year)
                {
                    s = str;
                }
            }
            System.out.println(s);
        }

        sc.close();
    }
}
