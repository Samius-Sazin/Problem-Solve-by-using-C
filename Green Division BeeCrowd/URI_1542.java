import java.util.*;
public class URI_1542 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        while(true)
        {
            int q = sc.nextInt();
            if(q == 0) break;

            int d = sc.nextInt();
            int p = sc.nextInt();

            int ans = (d * p * q) / (p - q);

            if(ans == 1)
            {
                System.out.println(ans + " pagina");
            }

            else
            {
                System.out.println(ans + " paginas");
            }
        }

        sc.close();
    }
}
