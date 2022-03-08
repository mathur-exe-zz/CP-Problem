package Resursion;

public class Pattern2 {
    public static void main(String[] args) {
        int n =5;
        int b= 1;
        pt2(0, b, n);
    }

    private static void pt2(int t, int b, int n) {
        if(n==1) {
            System.out.print("X ");
            return;
        }
        if(t<=b && b<=n) {
            System.out.print("X ");
            pt2(i+1, b, n);
        }
        System.out.println();
        pt2(0, n+1, b);
    }
}
