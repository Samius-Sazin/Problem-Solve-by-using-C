import java.util.*;
public class URI_1847 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        if(a > b && (b == c || b < c))
        {
            System.out.println(":)");
        }

        else if(a < b && (b == c || b > c))
        {
            System.out.println(":(");
        }

        else if(a < b && b < c && b-a > c-b)
        {
            System.out.println(":(");
        }

        else if(a < b && b < c && b-a <= c-b)
        {
            System.out.println(":)");
        }

        else if(a > b && b > c && a-b > b-c)
        {
            System.out.println(":)");
        }

        else if(a > b && b > c && a-b <= b-c)
        {
            System.out.println(":(");
        }

        else if(a == b && b < c)
        {
            System.out.println(":)");
        }

        else
        {
            System.out.println(":(");
        }

        sc.close();
    }
}
