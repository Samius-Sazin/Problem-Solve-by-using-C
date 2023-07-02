import java.util.*;
public class URI_1467
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        while(sc.hasNextInt())
        {
            int arr[] = new int[3];
            for(int i=0; i<3; i++)
            {
                arr[i] = sc.nextInt();
            }

            int co1 = 0, co2 = 0;
            int min = Integer.MAX_VALUE;
            for(int i=0; i<3; i++)
            {
                if(arr[i] == 0)
                {
                    co1++;
                }
                else
                {
                    co2++;
                }
                min = Math.min(co1, co2);
            }
            if(co1==3 || co2==3)
            {
                System.out.println("*");
                continue;
            }

            if(min == co1)
            {
                for(int i=0; i<3; i++)
                {
                    if(arr[i] == 0)
                    {
                        System.out.println((char)(65+i));
                    }
                }
            }

            if(min == co2)
            {
                for(int i=0; i<3; i++)
                {
                    if(arr[i] == 1)
                    {
                        System.out.println((char)(65+i));
                    }
                }
            }
            
        }

        sc.close();
    }
    
}
