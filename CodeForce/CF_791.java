import java.util.Scanner;

public class CF_791 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();

        int count = 0;
        while(n <= m){
            n *= 3;
            m *= 2;
            count++;
        }

        System.out.println(count);

        sc.close();
    }
}
