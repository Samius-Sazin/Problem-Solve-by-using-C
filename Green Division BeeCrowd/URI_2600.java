import java.util.*;

public class URI_2600 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0)
        {
            int x = sc.nextInt();

            int arr[] = new int[4];
            for (int i = 0; i < 4; i++) {
                arr[i] = sc.nextInt();
            }

            int y = sc.nextInt();

            if (x < 1 || x > 6 || y < 1 || y > 6)
            {
                System.out.println("NAO");
                continue;
            }

            int c = 0;
            for(int i=0; i<4; i++)
            {
                if (arr[i] < 1 || arr[i] > 6)
                {
                    c = 1;
                    break;
                }
            }
            if(c == 1)
            {
                System.out.println("NAO");
                continue;
            }

            int xrr[] = new int[10];
            c = 0;

            xrr[x]++;
            xrr[y]++;
            xrr[arr[0]]++;
            xrr[arr[1]]++;
            xrr[arr[2]]++;
            xrr[arr[3]]++;

            for(int i=1; i<=6; i++)
            {
                if(xrr[i] == 0 || xrr[i] > 1)
                {
                    c = 1;
                    break;
                }
            }

            if(c == 1)
            {
                System.out.println("NAO");
                continue;
            }

            if (x + y==7 && arr[0] + arr[2]==7 && arr[1] + arr[3]==7)
            {
                System.out.println("SIM");
            }
            else
            {
                System.out.println("NAO");
            }
        }

        sc.close();
    }
}
