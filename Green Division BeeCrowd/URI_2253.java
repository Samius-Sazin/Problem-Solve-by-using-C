import java.util.*;
public class URI_2253
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        String str;
        while(sc.hasNextLine())
        {
            str = sc.nextLine();
            int i = 0;
            int upperCase = 0;
            int lowerCase = 0;
            int numb = 0;
            if(str.length()>=6 && str.length()<=32)
            {
                while (str.length() > i)
                {
                    if (str.charAt(i) >= 'A' && str.charAt(i) <= 'Z')
                    {
                        upperCase++;
                    }
                    else if (str.charAt(i) >= 'a' && str.charAt(i) <= 'z')
                    {
                        lowerCase++;
                    }
                    else if (str.charAt(i) >= '0' && str.charAt(i) <= '9')
                    {
                        numb++;
                    }

                    i++;
                }
                if(upperCase==0 || lowerCase==0 || numb==0)
                {
                    System.out.println("Senha invalida.");
                }
                else if(upperCase + lowerCase + numb == str.length())
                {
                    System.out.println("Senha valida.");
                }
                else
                {
                    System.out.println("Senha invalida.");
                }
            }
            else
            {
                System.out.println("Senha invalida.");
            }
        }
        sc.close();
    }
}
