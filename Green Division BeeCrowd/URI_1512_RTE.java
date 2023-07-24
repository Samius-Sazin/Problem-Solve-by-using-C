/*
Runtime Error
*/

import java.util.*;
public class URI_1512_RTE {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        while(true)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();

            if( a == 0 && b == 0  && c == 0)
            {
                break;
            }

            int i = 1;
            int count = 0;
            int check = 0;
            int d;
            int xrr[] = new int[a+1];
            while(true)
            {
                if(b * i > a)
                {
                    b = c;
                    i = 1;
                    check++;
                    if(check == 2)
                    {
                        break;
                    }
                    continue;
                }

                d =b * i;

                xrr[d]++;
                if(xrr[d] == 1)
                {
                    count++;
                }

                i++;
            }

            System.out.println(count);
        }

        sc.close();
    }
}
