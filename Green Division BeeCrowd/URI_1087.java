import java.util.*;

public class URI_1087 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        while (true) {

            int x1 = sc.nextInt();
            int y1 = sc.nextInt();
            int x2 = sc.nextInt();
            int y2 = sc.nextInt();

            if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
                break;

            int m = Math.abs(x1 - x2);
            int n = Math.abs(y1 - y2);

            if (x1 == x2 && y1 == y2) {
                System.out.println("0");
            }

            else if (x1 == x2 || y1 == y2) {
                System.out.println("1");
            }

            else if (m == n) {
                System.out.println("1");
            }

            else {
                System.out.println("2");
            }
        }
        sc.close();
    }

}
