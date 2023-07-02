import java.util.*;
public class URI_2702
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int arr[][] = new int[2][3];

        int ans = 0;

        for(int r=0; r<arr.length; r++)
        {
            for(int c=0; c<arr[r].length; c++)
            {
                arr[r][c] = sc.nextInt();
                if(r==1)
                {
                    if(arr[r][c] > arr[r-1][c])
                    {
                        ans += arr[r][c]-arr[r-1][c];
                    }
                }
            }
        }
        System.out.println(ans);

        sc.close();
    }
}
