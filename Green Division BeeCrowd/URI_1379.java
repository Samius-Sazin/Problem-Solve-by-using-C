import java.util.Scanner;
public class URI_1379 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        while(true)
        {
            long a = sc.nextLong();
            long b = sc.nextLong();

            if(a==0 && b==0)
            {
                break;
            }
            System.out.println(2 * a - b);
        }


        sc.close();
    }
}
