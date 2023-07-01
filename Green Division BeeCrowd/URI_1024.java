import java.util.*;
public class URI_1024
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        sc.nextLine();

        while(t-- > 0)
        {
            StringBuilder sb = new StringBuilder();
            String str = sc.nextLine();
            sb.append(str);

            int i;
            for(i=0; i<sb.length(); i++)
            {
                if((sb.charAt(i)>='A' && sb.charAt(i)<='Z') || (sb.charAt(i)>='a' && sb.charAt(i)<='z'))
                {
                    char ch = (char)((int)sb.charAt(i) + 3);
                    sb.setCharAt(i, ch);
                }
            }
            sb.reverse();

            int n = sb.length() / 2;
            for(i=n; i<sb.length(); i++)
            {
                    char ch = (char)((int)sb.charAt(i)-1);
                    sb.setCharAt(i, ch);
            }
            System.out.println(sb);
        }
        sc.close();
    }
}
