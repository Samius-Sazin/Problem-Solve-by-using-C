import java.util.*;
public class URI_1257
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-- > 0)
        {
            int n = sc.nextInt();
            sc.nextLine();//TO ignore the input buffer

            int sum = 0;

            for(int i=0; i<n; i++)
            {
                String str = sc.nextLine();
                int j = 0;
                while(str.length() > j)
                {
                    //sum = sum + valueOfCharacters+i+position
                    sum = sum + ( (int)str.charAt(j) - 65 ) + i + j;
                    j++;
                }
            }
            System.out.println(sum);
        }
        return;
    }
}
