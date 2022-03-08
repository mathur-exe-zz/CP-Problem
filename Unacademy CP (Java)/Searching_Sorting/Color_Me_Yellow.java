package Searching_Sorting;
import java.util.*;
/**
 * Color_Me_Yellow --> CodeChef
 * Link: https://www.codechef.com/UAPRAC/problems/COLYLW/
 */
public class Color_Me_Yellow {

    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter the number of testcases");
        int t =sc.nextInt();
        
        while (t>0) {
            System.out.println("Enter the number of columns of the matrix");
            int col=sc.nextInt();
            System.out.println("Enter the number of red, green & blue");
            int r = sc.nextInt();
            int g = sc.nextInt();
            int b = sc.nextInt();
            CMY(col, r, g, b);
            t--;
        }
    }

    private static void CMY(int col, int r, int g, int b) {
        int sum = r+g+b;
        int rb = r +b;
        int counter=0;
        for (int i = 0; i < col; i++) {
            if (sum>=3 & rb>=2) {
                counter++;
                sum -=3;
                rb -=2; 
            }
            else break;
        }
        System.out.println("Maximum numbr of rows that can be coloured are "+counter);
    }
}