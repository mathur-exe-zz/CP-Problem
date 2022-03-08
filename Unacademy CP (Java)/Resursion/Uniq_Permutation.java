package Resursion;

import java.util.HashMap;

public class Uniq_Permutation {
    public static void main(String[] args) {
            String ip = "ACAC";
            premutation(ip, " ");
    }

    private static void premutation(String ip, String perm) {
        if(ip.length()==0) {
            System.out.println(perm);
            return;
        }
        HashMap <Character, Integer> st = new HashMap<>();
        for (int i = 0; i < ip.length(); i++) {
            char ch = ip.charAt(i);
            if (st.get(ch) == null) 
            if (st.get(ch)==0) {
                String resultst = ip.substring(0, i)+ip.substring(i+1);
                st.put(ch, 1);
                premutation(resultst, perm+ch);
            }
        }
    }

}
