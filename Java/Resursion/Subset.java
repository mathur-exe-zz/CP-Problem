package Resursion;

public class Subset {
    public static void main(String[] args) {
        int [] a = {1, 2, 3};
        sub(a, 0, a.length, "");
    }

    private static void sub(int[] a, int i, int n, String st) {
       if(i==n) {
           System.out.println(st);
           return;
       } 
       sub(a, i+1, n, st+a[i]);
       sub(a, i+1, n, st);
    }
}
