import java.util.Scanner;

public class URI_2310 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        int x, y, z, a, b, c;
        double sum1 = 0.0, sum2 = 0.0, sum3 = 0.0;
        double suc1 = 0.0, suc2 = 0.0, suc3 = 0.0; 
        while(t-- > 0)
        {
            String str = sc.next();

            x = sc.nextInt();
            y = sc.nextInt();
            z = sc.nextInt();
            sum1 += x;
            sum2 += y;
            sum3 += z;

            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            suc1 += a;
            suc2 += b;
            suc3 += c;
        }
        
        System.out.printf("Pontos de Saque: %.2f %%.\n",suc1/sum1 * 100);
        System.out.printf("Pontos de Bloqueio: %.2f %%.\n",suc2/sum2 * 100);
        System.out.printf("Pontos de Ataque: %.2f %%.\n",suc3/sum3 * 100);

        sc.close();
    }
}
