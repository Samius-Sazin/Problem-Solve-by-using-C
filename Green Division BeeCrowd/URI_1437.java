import java.util.Scanner;
public class URI_1437 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        while(true)
        {
            int n = sc.nextInt();

            if(n == 0)
            {
                break;
            }

            String str = sc.next();
            int i = 0, dir = 1;

            while(i < n)
            {
                if(str.charAt(i) == 'D')//right
                {
                    dir++;
                    if(dir > 4)
                    {
                        dir = 1;
                    }
                }

                else if(str.charAt(i) == 'E')//left
                {
                    dir--;
                    if(dir == 0)
                    {
                        dir = 4;
                    }
                }
                i++;
            }
            if(dir == 1) System.out.println("N");
            else if(dir == 2) System.out.println("L");
            else if(dir == 3) System.out.println("S");
            else if(dir == 4) System.out.println("O");
        }

        sc.close();
    }
}