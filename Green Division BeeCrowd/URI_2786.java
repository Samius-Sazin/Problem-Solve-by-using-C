import java.util.*;
public class URI_2786 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();

        System.out.println((x*y)+((x-1)*(y-1)));
        System.out.println(2*(x-1) + 2*(y-1));

        sc.close();
    }
}
