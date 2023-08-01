import java.util.*;
public class CF_158A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();

        int arr[] = new int[n];
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
            if(i < k && arr[i] == 0)
            {
                System.out.println(i);
                sc.close();
                return;
            }
        }

        int count = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i] >= arr[k-1])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        
        System.out.println(count);

        sc.close();
    }
}
