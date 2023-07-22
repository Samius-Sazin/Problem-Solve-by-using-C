import java.util.*;
public class URI_2061 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt(), y = sc.nextInt();

        while(y-- > 0)
        {
            String str = sc.next();
            if(str.charAt(0) == 'f')
            {
                x++;
            }

            else if(str.charAt(0) == 'c')
            {
                x--;
            }
        }
        System.out.println(x);

        sc.close();
    }
}
