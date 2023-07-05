import java.util.*;
public class URI_1963 {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        float f1 = sc.nextFloat();
        float f2 = sc.nextFloat();
        float ans = (100/f1) * (f2-f1);
        System.out.printf("%.2f%%\n",ans);
        sc.close();
    }
}
