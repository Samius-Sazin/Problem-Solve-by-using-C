/*
wrong ans
but same calculation works in c/c++
*/
import java.util.*;
public class URI_1214 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-- > 0)
        {
            int n = sc.nextInt();
            int sum = 0;

            int arr[] = new int[n];
            for(int i=0; i<n; i++)
            {
                arr[i] = sc.nextInt();
                sum += arr[i];
            }
            double avrg = (double)sum / n;

            int count = 0;
            for(int i=0; i<n; i++)
            {
                if(arr[i] > avrg)
                {
                    count++;
                }
            }

            double ans = (double)count / n * 100.0;

            System.out.printf("%.3f", ans);
            System.out.println("%");
        }

        sc.close();
    }
}
