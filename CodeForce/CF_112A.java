import java.util.Scanner;

public class CF_112A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        String str1 = sc.next();
        String str2 = sc.next();

        str1 = str1.toUpperCase();
        str2 = str2.toUpperCase();

        System.out.println(str1);
        System.out.println(str2);
        System.out.println(str1.compareTo(str2));

        if(str1.compareTo(str2) == 0)
        {
            System.out.println("0");
        }

        else if(str1.compareTo(str2) > 0)
        {
            System.out.println("1");
        }

        else if(str1.compareTo(str2) < 0)
        {
            System.out.println("-1");
        }

        sc.close();
    }
}
