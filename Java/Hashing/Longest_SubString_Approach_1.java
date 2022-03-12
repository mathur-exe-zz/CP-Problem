package Hashing;

import java.util.*;

/*
    In this approach, the concept of sliding window has been used 
*/

public class Longest_SubString_Approach_1 {
    public static void main(String[] args) {
        String str = "abcdeafbdgcbb";
        System.out.println(LongestSubString(str));
    }

    private static int LongestSubString(String str) {
        HashMap <Character, Integer> map = new HashMap<>();
        int start =0, end=0;
        // Start and end variable are the index of the sliding window
        int t, maxsize=1;
        for (int i = 0; i < str.length(); i++) {
            t=0;
            char ch = str.charAt(i);
            if (map.containsKey(ch)) {
                while (map.containsKey(ch)) {
                    map.remove(ch, start);
                    start++;
                }
                end=i;
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
