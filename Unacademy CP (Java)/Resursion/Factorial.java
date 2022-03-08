package Resursion;

public class Factorial {
    public static void main(String[] args) {
        int fac = 6;
        System.out.println(factor(fac)); 
    }

    private static int factor(int fac) {
        if (fac==1) return 1;
        
        return fac*factor(fac-1);
        
    }

}
