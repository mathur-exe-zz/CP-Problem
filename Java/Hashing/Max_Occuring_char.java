package Hashing;

// Given a string, find the frequency of maximum occuring character

import java.util.HashMap;
import java.util.Set;

/**
 * Max_Occuring_char
 */
public class Max_Occuring_char {

    private static char MaxOccuringChar(String str) {

        HashMap <Character, Integer> map = new HashMap<>();

        //Storing the frequency of all the characters in the string
        
        for (int i = 0; i < str.length();i++) {
            char ch= str.charAt(i);
            if(map.containsKey(ch)) {
                int val = map.get(ch);
                map.put(ch, val +1);
            }
            else {
                map.put(ch, 1);
            }
        }

        // the key set function basically gives you all the keys present in the hashmap and store it in  a set
        Set <Character> keyset = map.keySet();

        int maxoccur = 0;
        char maxchar = ' ';
        for (char key : keyset) {
            if (map.get(key) > maxoccur) {
                maxoccur = map.get(key);
                maxchar = key;
            }
        }

        return maxchar;
    } 

    public static void main(String[] args) {
        String str = "aabbddccdda";
        System.out.println(MaxOccuringChar(str));
    }
}