package Resursion;

/**
 * N_Natural_Numbers
 */
public class N_Natural {

    public static void main(String[] args) {
        int n = 5;
        natural(n); 
    }

    private static void natural(int n) {
       if (n==0) return;
       System.out.println(n);
       natural(n-1);
       if (n==1) return;
       System.out.println(n);
    }
}