import java.util.Scanner;
public class URI_1029 {
    static int call;
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-- > 0)
        {
            call = 0;
            int n = sc.nextInt();
            int ans = fib(n);
            System.out.println("fib(" + n + ") = " + call + " calls = " + ans);
        }
        
        sc.close();
    }

    public static int fib(int n)
    {
        if(n == 0 || n == 1)
        {
            call++;
            return n;
        }
        else
        {
            
            return fib(n-1) + fib(n-2);call++;
        }
        

    }
}
