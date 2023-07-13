import java.util.*;
public class URI_2355{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        while(true)
        {
            int n = sc.nextInt();

            if(n == 0)
            {
                break;
            }

            int bra = n/90;
            double ger = n * (7.0 / 90);

            if(ger > (int)(n * (7.0 / 90)))
            {
                ger += 1;
            }

            System.out.println("Brasil " + bra + " x Alemanha " + (int)ger);
        }

        sc.close();
    }
}