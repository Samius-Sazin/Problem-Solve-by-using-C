import java.util.Scanner;

public class CF_263A
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int arr[][] = new int[5][5];
        int r, c, row = 0, col = 0;

        for(r=0; r<5; r++)
        {
            for(c=0; c<5; c++)
            {
                arr[r][c] = sc.nextInt();
                if(arr[r][c] == 1)
                {
                    row = r;
                    col = c;
                }
            }
        }

        int ans = Math.abs(row-2) + Math.abs(col-2);
        System.out.println(ans);

        sc.close();
    }
}