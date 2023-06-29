import java.util.*;
public class URI_1272
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        sc.nextLine();

        for(int i=0; i<t; i++)
        {
            String str = sc.nextLine();
            String ans = "";

            if(str.charAt(0) == ' ' && str.length()==1)
            {
                System.out.println(" ");
                break;
            }

            if(str.charAt(0) != ' ') ans+=str.charAt(0);

            int j = 0;
            while(str.length()-1 > j)//check from 1st index to last
            {
                if(str.charAt(j)==' ' && str.charAt(j+1)!=' ')
                {
                    ans += str.charAt(j+1);
                }
                j++;
            }
            System.out.println(ans);
        }

        return;
    }
}
