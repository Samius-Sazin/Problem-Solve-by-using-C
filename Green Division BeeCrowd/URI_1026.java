import java.util.*;
public class URI_1026
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        long x, y;
        while(sc.hasNextLong())
        {
            x = sc.nextLong();
            y = sc.nextLong();

            System.out.println(x ^ y);
        }

        sc.close();
    }
}