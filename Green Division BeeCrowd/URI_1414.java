import java.util.*;
public class URI_1414 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t, m;
        while(true)
        {
            t = sc.nextInt();
            m = sc.nextInt();
            if(t==0 && m==0)
            {
                break;
            }

            int ttl_point = 0;
            while(t-- > 0)
            {
                String str = sc.next();
                int p = sc.nextInt();
                ttl_point += p;
            }

            System.out.println(3*m - ttl_point);
        }
        sc.close();
    }
}
