package BackTracking;
import java.util.*;

public class Subset {
    public static void main(String[] args) {
        int [] ar = {1, 2, 3};
        ArrayList <Integer> arr = new ArrayList<>(); 
        arr.clear();
        subBT(ar, arr, 0, ar.length);
    }

    private static void subBT(int [] ar, ArrayList <Integer> arr, int i, int n) {
        if(i==n) {
            String st = "";
            for (Integer t : arr) {
                st += Integer.toString(t);
            }
            System.out.println(st);
            // Object[] a = arr.toArray(); 
            // for (int j = 0; j < arr.size(); j++) {
            //     System.out.print(a[j]+" ");
            // }
            return;
        }
        
        arr.add(ar[i]);
        subBT(ar, arr, i+1, n);
        arr.remove(arr.size()-1);
        subBT(ar, arr, i+1, n);
    }
}
