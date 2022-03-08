package Resursion;

/*
    for n = 5           for n = 4
    X                   X
    X X                 X X
    X X X               X X X 
    X X X X             X X X X 
    X X X X X
*/

public class Pattern3 {
    public static void main(String[] args) {
        int n =5;
        pattern(0, 0, n);
    }

    private static void pattern(int i, int n, int b) {
        if(n==b+1) return;
        if(i<n & n<=b) {
            System.out.print("X ");
            pattern(i+1, n, b);
        }
        else {
            System.out.println();
            pattern(0, n+1, b);
        }
    }
}
