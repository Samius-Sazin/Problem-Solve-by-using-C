import java.util.Scanner;

public class URI_1960 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int div;

        if(n >= 900)
        {
            System.out.print("CM");
            n -= 900;
        }
        else if(n >= 500)
        {
            System.out.print("D");
            n -= 500;
        }

        if(n >= 400)
        {
            System.out.print("CD");
            n -= 400;
        }
        else if(n >= 100)
        {
            div = n / 100;
            for(int i=0; i<div; i++)
            {
                System.out.print("C");
            }
            n %= 100;
        }

        if(n >= 90)
        {
            System.out.print("XC");
            n -= 90;
        }
        else if(n >= 50)
        {
            System.out.print("L");
            n -= 50;
        }

        if(n >= 40)
        {
            System.out.print("XL");
            n -= 40;
        }
        else if(n >= 10)
        {
            div = n / 10;
            for(int i=0; i<div; i++)
            {
                System.out.print("X");
            }
            n %= 10;
        }

        if(n == 9)
        {
            System.out.print("IX");
            n -= 40;
        }
        else if(n >= 5)
        {
            System.out.print("V");
            n -= 5;
        }

        if(n == 4)
        {
            System.out.print("IV");
            n -= 4;
        }
        else if(n >= 1)
        {
            for(int i=0; i<n; i++)
            {
                System.out.print("I");
            }
            n = 0;
        }

        System.out.println();

        sc.close();
    } 
}