package Resursion;

/* 
If there are N people who are going in a party and they can either go alone or go in a pair with another member. They have no other choice. Find the number of ways in which these people can go to the party
*/
public class Going_to_Party {
    public static void main(String[] args) {
        int n =5;
        System.out.println(member(n));
    }

    private static int member(int n) {
        if (n==1 || n==2) return n;
        return member(n-1) + (n-1)*member(n-2);
    }
}
