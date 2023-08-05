import java.util.Scanner;

public class CF_218A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        String str = sc.next();
        StringBuilder sb = new StringBuilder("");
        sb.append((str));

        if(sb.charAt(0)>=97 && sb.charAt(0)<=122)
        {
            char ch = (char)((int)sb.charAt(0) - 32);
            sb.setCharAt(0, ch);
        }

        System.out.println(sb);

        sc.close();
    }
    
}
