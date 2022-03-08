package Resursion;

public class Non_Consecutive_1s {
    public static void main(String[] args) {
        int n = 4;
        System.out.println(ones(n));
    }

    private static int ones(int n) {
        if (n<=1) return 1;
        if (n==2) return 2;
        if (n==3) return 3;
        return ones(n-1)+ones(n-2);
    }
}
