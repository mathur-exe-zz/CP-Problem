package Resursion;

public class Matrix_Travel {
    public static void main(String[] args) {
        int row =4;
        int col = 4;
        travel(col, row, 0, 0, "");
    }

    private static void travel(int col, int row, int R, int D, String st) {
        if(R==col-1 && D == row-1) {
            System.out.println(st);
            return;
        } 
        while (R<col && D<row) {
            travel(col, row, R+1, D, st+"R");
            travel(col, row, R, D+1, st+"D");
        }
        
    }
}
