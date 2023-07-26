import java.util.*;
public class URI_1089 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);    
        
        int n;
        while((n = sc.nextInt()) != 0)
        {
            int arr[] = new int[n];

            for(int i=0; i<n; i++)
            {
                arr[i] = sc.nextInt();
            }

            int count = 0;
            for(int i=1; i<n-1; i++)
            {
                if(arr[i]>arr[i-1] && arr[i]>arr[i+1] || arr[i]<arr[i-1] && arr[i]<arr[i+1])
                {
                    count++;
                }
            }
            if(arr[0]>arr[1] && arr[0]>arr[n-1] || arr[0]<arr[1] && arr[0]<arr[n-1])
            {
                count++;
            }
            if(arr[n-1]>arr[n-2] && arr[n-1]>arr[0] || arr[n-1]<arr[n-2] && arr[n-1]<arr[0])
            {
                count++;
            }

            System.out.println(count);
        }

        sc.close();
    }
}
