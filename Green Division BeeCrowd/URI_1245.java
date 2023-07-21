import java.util.Scanner;
public class URI_1245 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        while(sc.hasNextInt())
        {
            int n = sc.nextInt();
            int ans = 0;
    
            int arr[] = new int[n];
            char ch[] = new char[n];

            int mx = -1;

            for(int i=0; i<n; i++)
            {
                arr[i] = sc.nextInt();
                ch[i] = sc.next().charAt(0);
                mx = Math.max(mx, arr[i]);
            }

            int xrr[] = new int[1000];

            for(int i=0; i<n; i++)
            {
                xrr[arr[i]]++;
                if(ch[i] == 'E')
                {
                    xrr[arr[i]+ch[i]+500]++;
                }
                else
                {
                    xrr[arr[i]+ch[i]]++;
                }
            }

            for(int i=0; i<n; i++)
            {
                while(xrr[arr[i]] >= 2)
                {
                    if(xrr[arr[i] + 'D'] > 0 && xrr[arr[i] + 'E' + 500] > 0)
                    {
                        ans++;
                        xrr[arr[i] + 'D']--;
                        xrr[arr[i] + 'E' + 500]--;
                        xrr[arr[i]] -= 2;
                    }
                    else
                    {
                        break;
                    }
                    
                }
            }
            System.out.println(ans);
        }

        sc.close();
    }
}
