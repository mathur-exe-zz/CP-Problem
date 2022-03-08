package BackTracking;

public class N_Queen {
    public static void main(String[] args) {
        int n =5 ;
        boolean [][] grid = new boolean[n][n];
        for (int i =0; i<n ;i++) {
            for (int j=0; j<n; j++) grid[i][j] = false;
        }
        Queen(grid, 0, n);
        System.out.println(count);
    }
    static int count =0;
    private static void Queen(boolean[][] grid, int curr_row, int n) {
        if(curr_row==n) {
            count++;
            display(grid, n);
            System.out.println();
            System.out.println();
            return;
        }

        for (int i = 0; i < n; i++) {
            if(isSafe(grid, curr_row, i, n)) {
                grid[curr_row][i] = true;
                Queen(grid, curr_row+1, n);
                grid[curr_row][i] = false;
            }
        }
    }
    private static boolean isSafe(boolean[][] grid, int row, int col, int n) {
        // column check
        for (int i = row-1; i >= 0; i--) {
            if(grid[i][col]) return false;
        }
        // Upper Left Diagonal
        for (int i = row-1, j = col-1; i >= 0 & j>=0; i--, j--) {
            if(grid[i][j]) return false;
        }
        // Upper Right Diagonal
        for (int i = row-1, j = col+1; i >= 0 & j<n; i--, j++) {
            if(grid[i][j]) return false;
        }
        return true;
    }

    private static void display(boolean[][] grid, int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if(grid[i][j]) System.out.print("Q ");
                else System.out.print(". ");
            }
            System.out.println();
        }
    }
}
