package BackTracking;

import java.util.*;

public class Ratmaze {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter the dimension of the maze");
        int row = sc.nextInt();
        int col = sc.nextInt();
        int [][] ip = new int[row][col];

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) 
                ip[i][j] = sc.nextInt(); 
        }   
    }


}
