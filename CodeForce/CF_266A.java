import java.util.Scanner;

public class CF_266A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        String str = sc.next();

        int count = 0;
        for(int i=0; i<n-1; i++) {
            if(str.charAt(i) == str.charAt(i+1)) {
                count++;
            }
        }

        System.out.println(count);
        
        sc.close();
    }
}
