package Searching_Sorting;
import java.util.*;


/**
 * GCM_LCM
 */
public class GCM_LCM {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        // System.out.println("Enter the number of test cases");
        int t = sc.nextInt();
        int temp =t;
        // HashMap <Integer, Integer> map = new HashMap<>();
        long [][] gl = new long[t][2];
        while (t>0) {
            // System.out.println("ENter the elements \n");
            int a = sc.nextInt();
            int b = sc.nextInt();
            gl[t-1][0] = a>b? gcm(b, a) : gcm(a, b);
            gl[t-1][1] = lcm (a, b);
            t--;
        } 
        for (int ls = temp-1; ls>=0; ls--) {
            System.out.println(gl[ls][0]+" "+gl[ls][1]);
        }            
    }

    private static int gcm(int a, int b) {
        if(a==0)
            return b;
        return gcm(b%a, a);
    }

    private static int lcm(int a, int b) {
        return (a*b)/gcm(a, b);
    }
}