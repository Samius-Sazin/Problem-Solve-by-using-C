import java.util.*;
public class URI_1795 {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();

        int row = n+1;
        int col = 2 * (n+1) - 1;

        int arr[][] = new int[row][col];

        int r, c;
        long sum = 0;

        for(r=0; r<row; r++)
        {
            for(c=0; c<col; c++)
            {
                arr[r][c] = 0;
            }
        }
        arr[0][row-1] = 1;

        if(n == 0)
        {
            System.out.println(1);
            sc.close();
            return;
        }

        for(r=1; r<row; r++)
        {
            for(c=row-1-r; c<row; c++)
            {
                if(c==0)
                {
                    arr[r][c] = arr[r-1][c+1];
                }
                else
                {
                    arr[r][c] = arr[r-1][c] + arr[r-1][c-1] + arr[r-1][c+1];
                }

                if(r==n)
                {
                    sum += arr[r][c];
                }  
            }

            for(c=row; c<row+r; c++)
            {
                if(c == col-1)
                {
                    arr[r][c] = arr[r-1][c-1];
                }
                else
                {
                    arr[r][c] = arr[r-1][c] + arr[r-1][c-1] + arr[r-1][c+1];
                }

                if(r==n)
                {
                    sum += arr[r][c];
                }  
            }
        }
        
        System.out.println(sum);

        sc.close();
    }
}
