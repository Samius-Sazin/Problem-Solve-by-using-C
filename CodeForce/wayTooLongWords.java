import java.util.Scanner;

public class wayTooLongWords {
    public static void main(String ars[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        while(n-- > 0)
        {
            String str = sc.next();
            if(str.length() <= 10)
            {
                System.out.println(str);
                continue;
            }

            System.out.print(str.charAt(0) + "" + (str.length()-2) + "" + str.charAt(str.length()-1));
            System.out.println();
        }
        sc.close();
    }
}
