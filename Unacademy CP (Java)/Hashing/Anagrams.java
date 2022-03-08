package Hashing;

import java.util.*;

public class Anagrams {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the dimension of array");
        int n = sc.nextInt();

        String [] str = new String[n]; 
        System.out.println("Enter the elements in the array");
        for (int i = 0; i < n; i++) {
            str[i] = sc.nextLine();
        }
        anagram(str);
    }

    private static void anagram(String[] str) {
        
        int counter =0;
        ArrayList <char []> arr = new ArrayList<>();
        HashMap <char [], ArrayList <String>> map = new HashMap<>();

        for (int i = 0; i < str.length; i++) {
            
            char [] ch = str[i].toCharArray();
            Arrays.sort(ch);
            ArrayList <String> ar = new ArrayList<>();
            
            if (map.containsKey(ch)) {
                ar = (ArrayList<String>)map.get(ch);
                map.remove(ch, ar);
                ar.add(str[i]);
                ar.add(str[i]);
                map.put(ch, ar);
            }

            else {
                ar.add(str[i]);
                map.put(ch, ar);
                counter++;
            }
        }
        
        // Set<char[]> final_str = map.keySet();
        char [] ch = new char[map.size()];
        ch = (Character [])map.keySet();

        ArrayList <String []> arr = new ArrayList<>(); 
        for (int i = 0; i < ch.length; i++) {
            arr= (ArrayList <String []>)map.get(key)
        }


    
    }


}
