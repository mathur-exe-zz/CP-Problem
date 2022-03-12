package Hashing;

import java.util.ArrayList;
import java.util.HashMap;

public class Intersection_of_2_arrays {
    public static void main(String[] args) {
        int [] a1 = {5,5, 7, 7, 2, 5};
        int [] a2 = {6, 7, 9, 5, 5, 5, 5};
        System.out.println(Intersectionofarrays(a1, a2);
    }

    private static char[] Intersectionofarrays(int[] a1, int[] a2) {
        
        HashMap<Integer, Integer> map = new HashMap<>();
        
        for (int i = 0; i < a1.length; i++) {
            int na = a1[i];

            if (map.containsKey(a1[i])) {
                int f = map.get(a1[i]);
                map.put(a1[i]], f+1);
            }
            else 
                map.put(a1[i], 1);
        }
        
        ArrayList <Integer> al = new ArrayList<>();

        for (int key : al) {
            if (a2[key] == map.containsKey(a2[key) {
                
            }
        }
    }

    

    
}
