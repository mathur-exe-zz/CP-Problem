package BackTracking;

public class KnightTour {
    public static void main(String[] args) {
        int n = 5;
        int [][] grid = new int[n][n];
        boolean [][] visited = new boolean [n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                grid[i][j] = -1;
                visited[i][j] = false;
            } 
        }
        Tour(grid, n, 0, 0, 0, visited);
        System.out.println(counter);
    }
    static int counter=0;
    private static void Tour(int[][] grid, int n, int i, int j, int count, boolean [][] visited) {
        if(count == n*n-1) {
            grid[i][j] = count;
            display(grid, n);
            System.out.print("\n\n");
            counter++;
            return;
        }
        int [] XD = {-2, -2, -1, -1, 2, 2, 1, 1};
        int [] YD = {1, -1, 2, -2, 1, -1, 2, -2}; 
        visited[i][j] = true;
        grid[i][j] = count;
        for (int k = 0; k < 8; k++) {
            isSafe(grid, n, i+XD[k], j+YD[k], visited);
            Tour(grid, n, i+XD[k], j+YD[k], count+1, visited);
        }
        grid[i][j] =-1;
        visited[i][j] = false;
    }
    private static void display(int[][] grid, int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) System.out.print(grid[i][j]+" ");
        }
        System.out.println();
    }
    private static boolean isSafe(int[][] grid, int n, int i, int j, boolean [][] visited) {
     return i>=0 & j>=0 & i<n & j<n & visited[i][j] == false;  
    }   
}
