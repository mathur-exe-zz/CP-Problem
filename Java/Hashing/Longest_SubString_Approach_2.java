package Hashing;

import java.util.*;

public class Longest_SubString_Approach_2 {
    public static void main(String[] args) {
        String str = "abcdeafbdgcbb";
        System.out.println(LongestSubString(str)) ;
    }

    private static int LongestSubString(String str) {
        
        HashMap <Character, Integer> map = new HashMap<>();
        int t, maxsize=1;
        int end , start =0;
        // Staring and end position of the sliding window

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            
            if(map.containsKey(ch)) {
                int val = map.get(ch);
                map.remove(ch, val);
                start = val + 1;
                end =i;
                map.put(ch, end);
            }
            else {
                end=i;
                map.put(ch, end);
            }
            t = end - start +1;
            // here +1 has been done so that the actual size is given instead of the difference of index 
            // index start from 0

            if (t>maxsize) {
                maxsize = t;
            }
        }
        return maxsize;
    }
}
