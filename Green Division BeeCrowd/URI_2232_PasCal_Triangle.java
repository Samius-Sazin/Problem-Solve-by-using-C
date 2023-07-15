import java.util.Scanner;

public class URI_2232_PasCal_Triangle {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t-- > 0)
        {
            int row = sc.nextInt();
            int col = 2 * row - 1;

            int arr[][] = new int[row][col];

            int r, c;
            for (r = 0; r < row; r++)
            {
                for (c = 0; c < col; c++)
                {
                    arr[r][c] = 0;
                }
            }

            arr[0][row - 1] = 1;

            if(row == 1)
            {
                System.out.println(1);
                continue;
            }

            long sum = 1;
            for(r=1; r<row; r++)
            {
                for(c=row-1-r; c<col; c+=2)
                {
                    if(c == row-1-r)
                    {
                        arr[r][c] = 1;
                    }

                    else if(r!=row-1 && arr[r-1][c+1] == 0)
                    {
                        arr[r][c] = 1;
                        sum += arr[r][c];
                        break;
                    }

                    else if(r==row-1 && c==col-1)
                    {
                        arr[r][c] = 1;
                        sum += arr[r][c];
                        break;
                    }

                    else
                    {
                        arr[r][c] = arr[r-1][c-1] + arr[r-1][c+1];
                    }

                    sum += arr[r][c];
                }
            }
            System.out.println(sum);
        }

        sc.close();
    }
}
