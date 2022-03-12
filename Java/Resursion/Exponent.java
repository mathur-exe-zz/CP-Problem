package Resursion;

/**
 * Exponent
 */
public class Exponent {

    public static void main(String[] args) {
        int a =5;
        int b=4;
        System.out.println(Ex(a, b));
    }

    private static int Ex(int a, int b) {
        if(b==0) return 1;
        if (b==1) return a;
        int t = Ex(a, b/2);
        return b%2==0? t*t: a*t*t;
    }
}