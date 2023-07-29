import java.util.Scanner;

public class URI_1607 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        String str;
        while(n-- > 0)
        {
            str =  sc.next();
            StringBuilder sb1 = new StringBuilder("");
            sb1.append(str);

            str = sc.next();
            StringBuilder sb2 = new StringBuilder("");
            sb2.append(str);

            int i = 0, count = 0;
            while(sb1.length()>i)
            {
                while(sb1.charAt(i) != sb2.charAt(i))
                {
                    count++;
                    if(sb1.charAt(i) == 'z')
                    {
                        sb1.setCharAt(i, 'a');
                    }
                    else
                    {
                        sb1.setCharAt(i, (char)(sb1.charAt(i)+1));
                    } 
                }
                i++;
            }
            System.out.println(count);
        }

        sc.close();
    }
}
