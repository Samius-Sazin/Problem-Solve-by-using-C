import java.util.Scanner;
public class URI_2168 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[][] = new int[n+1][n+1];
        for(int r=0; r<=n; r++)
        {
            for(int c=0; c<=n; c++)
            {
                arr[r][c] = sc.nextInt();
            }
        }

        int r = 0, c = 0, count;
        while(r < n)
        {
            count = 0;
            if(arr[r][c] == 1)
            {
                count++;
            }
            if(arr[r][c+1] == 1)
            {
                count++;
            }
            if(arr[r+1][c] == 1)
            {
                count++;
            }
            if(arr[r+1][c+1] == 1)
            {
                count++;
            }

            if(count >= 2)
            {
                System.out.print("S");
            }
            else
            {
                System.out.print("U");
            }

            c++;

            if(c == n)
            {
                c = 0;
                r++;
                System.out.println();
            }
        }

        sc.close();
    }
}