package Resursion;

public class Check_Sorted {
    public static void main(String[] args) {
        int [] a = {2, 1, 4, 5, 6};
        int print = sort(a, a.length);
        System.out.println(print!=0?"Yes":"No");
    }

    private static int sort(int[] a, int n) {
        if (n==1 || n==0) return 1;
        if (a[n-1] < a[n-2]) return 0;
        return sort(a, n-1);
    }
}
