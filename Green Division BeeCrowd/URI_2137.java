import java.util.Scanner;

public class URI_2137 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        while(sc.hasNextInt())
        {
            int n = sc.nextInt();
            int arr[] = new int[n];

            for(int i=0; i<n; i++)
            {
                arr[i] = sc.nextInt();
            }

            int temp, j;
            for(int i=1; i<n; i++)
            {
                temp = arr[i];
                for(j=i-1; j>=0; j--)
                {
                    if(arr[j] > temp)
                    {
                        arr[j+1] = arr[j];
                    }
                    else
                    {
                        break;
                    }
                }
                arr[j+1] = temp;
            }

            String check;
            for(int i=0; i<n; i++)
            {
                check = Integer.toString(arr[i]);
                if(check.length() == 0)
                {
                    System.out.println("0000");
                }
                else if(check.length() == 1)
                {
                    System.out.println("000" + check);
                }
                else if(check.length() == 2)
                {
                    System.out.println("00" + check);
                }
                else if(check.length() == 3)
                {
                    System.out.println("0" + check);
                }
                else
                {
                    System.out.println(check);
                }
            }
        }

        sc.close();
    }
}
