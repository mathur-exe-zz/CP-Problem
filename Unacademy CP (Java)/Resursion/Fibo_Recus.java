package Resursion;

public class Fibo_Recus {
    public static void main(String[] args) {
        int n =7;
        System.out.println(fibo(n));
    }

    private static int fibo(int n) {
        if (n==1) return 1; // Base case
        if (n==0) return 0; // Base case
        return fibo(n-1)+fibo(n-2); 
        //ith term of a fibonacci is (i-1)th + (i-2)th term
    }

}
