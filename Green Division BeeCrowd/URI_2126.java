import java.util.*;
public class URI_2126
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int Case = 0;

        while(sc.hasNextLine())
        {
            int ans = 0; //ans = subsequence counter
            String str;

            StringBuilder sb1 = new StringBuilder();//create string builder
            str = sc.nextLine();//create string and take input
            sb1.append(str);//append str to sb

            StringBuilder sb2 = new StringBuilder();
            str = sc.nextLine();
            sb2.append(str);

            Case++;
            int i=0, j = 0;
            int co = 0;
            while(sb2.length() > j)
            {
                if(sb2.charAt(j) == sb1.charAt(i))
                {
                    co++;
                    i++;
                }
                else
                {
                    if(co > 0)
                    {
                        j--;
                    }
                    co = 0;
                    i=0;
                }

                if(co == sb1.length())
                {
                    ans++;
                    co = 0;
                    i=0;
                }

                j++;
            }
            String s = sb1.toString();
            int last_index = sb2.lastIndexOf(s);
            if(last_index >= 0)
            {
                // co = last_index;
                System.out.println("Caso #"+Case+":");
                System.out.println("Qtd.Subsequencias: "+ans);
                System.out.println("Pos: "+(last_index+1));
            }

            else
            {
                System.out.println("Caso #"+Case+":");
                System.out.println("Nao existe subsequencia");
            }

            System.out.println();
        }
        sc.close();
    }
}
