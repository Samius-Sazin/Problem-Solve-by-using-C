import java.util.Scanner;

public class CF_231A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[][] = new int[n][3];

        int sum , count = 0;

        for(int r=0; r<n; r++)
        {
            sum = 0;
            for(int c=0; c<3; c++)
            {
                arr[r][c] = sc.nextInt();
                sum += arr[r][c];
                if(sum == 2)
                {
                    sum = -1;
                    count++;
                }
            }
        }

        System.out.println(count);

        sc.close();
    }
}
