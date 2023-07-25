import java.util.*;
public class URI_1104 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int a, b;
        while(true)
        {
            a = sc.nextInt();
            b = sc.nextInt();

            if(a==0 && b==0)
            {
                break;
            }

            int arr[] = new int[a];
            int brr[] = new int[b];

            int mx_a = -1;
            int mx_b = -1;

            for(int i=0; i<a; i++)
            {
                arr[i] = sc.nextInt();
                mx_a = Math.max(mx_a, arr[i]);
            }
            
            for(int i=0; i<b; i++)
            {
                brr[i] = sc.nextInt();
                mx_b = Math.max(mx_b, brr[i]);
            }

            int xrr_a[] = new int[mx_a+1];
            int xrr_b[] = new int[mx_b+1];

            for(int i=0; i<a; i++)
            {
                xrr_a[arr[i]] = 1;
            }

            for(int i=0; i<b; i++)
            {
                xrr_b[brr[i]] = 1;
            }

            int x = Math.min(xrr_a.length, xrr_b.length);
            int count_a = 0, count_b = 0;

            for(int i=0; i<x; i++)
            {
                if((xrr_a[i]==1 && xrr_b[i]==0) || (xrr_a[i]==0 && xrr_b[i]==1))
                {
                    if(xrr_a[i] == 1)
                    {
                        xrr_a[i] = -1;
                        count_a++;
                    }
                    else if(xrr_b[i] == 1)
                    {
                        xrr_b[i] = -1;
                        count_b++;
                    }
                }
            }

            if(xrr_a.length > xrr_b.length)
            {
                for(int i=x; i<xrr_a.length; i++)
                {
                    if(xrr_a[i] == 1)
                    {
                        xrr_a[i] = -1;
                        count_a++;
                    }
                }
            }

            else if(xrr_a.length < xrr_b.length)
            {
                for(int i=x; i<xrr_b.length; i++)
                {
                    if(xrr_b[i] == 1)
                    {
                        xrr_b[i] = -1;
                        count_b++;
                    }
                }
            }
            
            System.out.println(Math.min(count_a, count_b));
        }

        sc.close();
    }
}
