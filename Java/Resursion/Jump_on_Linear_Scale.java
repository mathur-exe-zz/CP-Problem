package Resursion;

public class Jump_on_Linear_Scale {
    public static void main(String[] args) {
        int n =4;
        jump(0, 0, n, "");
        System.out.println(counter);
    }

    static int counter=0;
    private static void jump(int i, int sum, int n, String st) {
        if(sum==n) {
            System.out.println(st);
            counter +=1;
            return;
        }
        if(sum>=n) return;
        for (int j = 1; j < 7; j++)
            jump(j, sum+j, n, st+j);
    }
}
