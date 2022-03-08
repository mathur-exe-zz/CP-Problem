package Resursion;

// import org.graalvm.compiler.nodes.ReturnNode;

public class Pattern {
    public static void main(String[] args) {
        int n =5;
        int col =n;
        pt(n, col);
    }

    private static void pt(int n, int col) {
        if (n==0) return;
        if (n>=1) {
            pt(n, col-1);
            System.out.print("* ");
            pt(n-1, col);
        }
        System.out.println();
    }
}
