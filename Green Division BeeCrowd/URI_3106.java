import java.util.*;

public class URI_3106 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];

        int sum = 0, xum = 0;

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();

            sum += arr[i];
            xum += arr[i] % 3;
        }

        System.out.println(sum - xum);

        sc.close();
    }
}