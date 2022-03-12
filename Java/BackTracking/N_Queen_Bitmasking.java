package BackTracking;

import java.util.BitSet;

public class N_Queen_Bitmasking {
    static BitSet col, left_diagonal, right_diagonal;
    // static BitSet left_diagonal = new BitSet();
    // static BitSet right_diagonal = new BitSet(100);
    static int ans =0;
    public static void main(String[] args) {
        int n = 4;
        Queen(n, 0);
        System.out.println(ans);
    }
    private static void Queen(int n, int c_row) {
        if(c_row == n) {
            ans++;
            return;
        }
        for (int c = 0; c < n; c++) {
            if(!col.get(c) & !left_diagonal.get(c_row-c+n-1) & !right_diagonal.get(c_row+c)) {
                col.set(c) = left_diagonal.set(c_row-c+n-1) = right_diagonal.set(c_row+c) = 1;
            }
        }
    }
}
