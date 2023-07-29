import java.util.Scanner;

public class URI_1219 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        while(sc.hasNextInt())
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();

            double s = (a + b + c) / 2.0;

            double Area_Triangle = Math.sqrt(s*(s-a)*(s-b)*(s-c));

            double r = Area_Triangle / s;
            double inner_circle_area = Math.PI * r * r;

            double R = (a*b*c) / (4*Area_Triangle);
            double Outer_Circle_Area = Math.PI * R * R;


            double rose = inner_circle_area;
            double violet = Area_Triangle - rose;
            double sunflower = Outer_Circle_Area - Area_Triangle;

            System.out.printf("%.4f %.4f %.4f\n", sunflower, violet, rose);
        }

        sc.close();
    }

}
