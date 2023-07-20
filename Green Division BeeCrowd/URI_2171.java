import java.util.*;
public class URI_2171 {
    public static void main(String args[])
    {
        Scanner sc= new Scanner(System.in);

        int n;
        while((n = sc.nextInt()) != 0)
        {
            int wood = 0;
            int fox = 0;
            int foxTotal = 0;
            int ttl = 0;
            while(ttl < n)
            {
                wood++;
                fox++;
                foxTotal += fox;
                ttl = wood + foxTotal;
                if(n - ttl < 0)
                {
                    wood = wood - (ttl - n);
                }
                
            }

            System.out.println(foxTotal + " " + wood);
        }

        sc.close();
    }
}
