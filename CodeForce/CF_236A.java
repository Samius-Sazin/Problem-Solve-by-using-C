import java.util.Scanner;

public class CF_236A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        String str = sc.next();
        int xrr[] = new int[26];

        for(int i=0; i<str.length(); i++){
            xrr[str.charAt(i) - 97] = 1;
        }

        int ans = 0;
        for(int i=0; i<26; i++){
            if(xrr[i] > 0){
                ans++;
            }
        }

        if(ans % 2 == 0){
            System.out.println("CHAT WITH HER!");
        }

        else {
            System.out.println("IGNORE HIM!");
        }

        sc.close();
    }
}