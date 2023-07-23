import java.util.*;
public class URI_1901 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int arr[][] = new int[n][n];
        int mx = -1;
        for(int r=0; r<n; r++)
        {
            for(int c=0; c<n; c++)
            {
                arr[r][c] = sc.nextInt();
                mx = Math.max(mx, arr[r][c]);
            }
        }

        int xrr[] = new int[mx+1]; 

        int vis[][] = new int[n*2][2];
        for(int r=0; r<n*2; r++)
        {
            for(int c=0; c<2; c++)
            {
                vis[r][c] = sc.nextInt();
            }
            xrr[arr[vis[r][0] - 1][vis[r][1] - 1]]++;
        }

        int ans = 0;
        for(int i=1; i<=mx; i++)
        {
            if(xrr[i] > 0)
            {
                ans++;
            }
        }

        System.out.println(ans);

        sc.close();
    }
}