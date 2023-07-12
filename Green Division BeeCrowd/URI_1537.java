import java.util.*;
public class URI_1537 {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        while(sc.hasNextInt())
        {
            int arr[] = new int[3];
            int volume = 1;

            for(int i=0; i<3; i++)
            {
                arr[i] = sc.nextInt();
                volume = volume*arr[i];
            }

            if(arr[0]==0 && arr[1]==0 && arr[2]==0)
            {
                break;
            }

            System.out.println((int)Math.cbrt(volume));
        }

        sc.close();
    }
}
