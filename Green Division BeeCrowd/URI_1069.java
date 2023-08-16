import java.util.*;
public class URI_1069 {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            int c01 = 0, c02 = 0, i=0;
            String s = sc.nextLine();
            while(s.length() > i){
                if(s.charAt(i) == '<'){
                    c01++;
                }
                else if(s.charAt(i) == '>' && (c01 > 0)){
                        c02++;
                        c01--;
                }
                i++;
            }
            System.out.println(c02);
        }
        sc.close();
    }
 
}