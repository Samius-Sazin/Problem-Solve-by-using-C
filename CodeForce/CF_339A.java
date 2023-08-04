import java.util.Scanner;
import java.util.Arrays;

public class CF_339A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        String str = sc.next();
        int arr[] = new int[str.length()/2 + 1];


        for(int i=0, j=0; i<str.length(); i+=2, j++)
        {
            arr[j] = (int)str.charAt(i) - 48;
        }

        Arrays.sort(arr);
        
        for(int i=0; i<=str.length()/2; i++)
        {
            System.out.print(arr[i]);
            if(i < str.length()/2)
            {
                System.out.print("+");
            }
        }
        System.out.println();

        sc.close();
    }
}
