package Hashing;

import java.util.*;

public class Sub_String_sum
{
    // Function to print subarray having a given sum using
    // sliding window technique
    public static int findSubarray(int[] A, int sum)
    {
        // maintains the sum of the current window
        int windowSum = 0;
 
        // maintain a window `[low, high-1]`
        int high = 0;
        int counter=0;
        // consider every subarray starting from the `low` index
        for (int low = 0; low < A.length; low++)
        {
            // if the current window's sum is less than the given sum,
            // then add elements to the current window from the right
            while (windowSum < sum && high < A.length)
            {
                windowSum += A[high];
                high++;
            }
 
            // if the current window's sum is equal to the given sum
            if (windowSum == sum)
            {
                // System.out.printf("Subarray found [%d–%d]", low, high - 1);
                counter++;
                // return;
            }
 
            // At this point, the current window's sum is more than the given sum.
            // Remove the current element (leftmost element) from the window
            windowSum -= A[low];
        }
        return counter;
    }
 
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the dimension of the array");
        int n = sc.nextInt();
        int[] A = new int [n];
        System.out.println("Enter the elements of the arrays");
        for (int i = 0; i < A.length; i++) {
            A[i] = sc.nextInt();
        }
        System.out.println("Enter the sum amount");
        int sum = sc.nextInt();
        System.out.println(findSubarray(A, sum));
        
    }
}