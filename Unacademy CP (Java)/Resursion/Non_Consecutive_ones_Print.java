package Resursion;

public class Non_Consecutive_ones_Print {
    public static void main(String[] args) {
        int n =5; 
        ones(n, 0, " ");
    }
    private static void ones(int n, int i, String st) {
        if(i==n) {
            System.out.println(st);
            return;
        }

        if (i<n) {
            if(st.charAt(st.length()-1)=='1') ones(n, i+1, st+"0");

            ones(n, i+1, st+"0");
            ones(n, i+1, st+"1");
        }
    }
}


/*
    if(i<n){
        if(st.charAt(st.length()-1))
    }


*/
