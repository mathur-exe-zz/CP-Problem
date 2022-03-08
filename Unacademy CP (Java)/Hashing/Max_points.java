package Hashing;
import java.util.*;
public class Max_points {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        // System.out.println("Enter the number of points you'd like to enter");
        int row = sc.nextInt();
        int [][] points = new int [row][2];
        // System.out.println("Enter the elements in the array");
        for (int i = 0; i < row; i++) {
            // System.out.println("Enter the Next Point");
            for (int j = 0; j < 2; j++) {

                // if (j%2==0) System.out.println("Enter the x coordinate the the point");
                // else System.out.println("Enter the y coordinate of the point");
                
                points[i][j] = sc.nextInt();
            }
            // System.out.println();
        }
        maxpoint(points);
    }

    private static void maxpoint(int[][] points) {
        HashMap <Double, Integer> map = new HashMap<>();
        int y =0;
        int x = 0;
        double slope =0;
        /*
            slope = y2 - y1 / x2 - x1
            y2 = points[row][1] & y1 = points[row][1]
            x2 = points[row][0] & x1 = points[row][0]
        */
        int max = 0;
        for (int i = 0; i < points.length-1; i++) {
            for (int j = i+1; j < points.length; j++) {
                y = (points[j][1] - points[i][1]);
                x = (points[j][0] - points[i][0]);
                slope = x!=0?y/x:100000000;
            
                if (map.containsKey(slope)) {
                    int count = map.get(slope);
                    System.out.println("Counter variable is "+count);
                    // count +=1;
                    map.replace(slope, count, count+1); 
                    max = max < count? count:max;
                    System.out.println("Current Maximum value is "+max);
                }
                map.putIfAbsent(slope, 1);
            }
        }
        System.out.println(max);
    }
}



