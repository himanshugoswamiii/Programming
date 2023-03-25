public class find_sum {
    public static void main(String[] args) {
        int sum=0;
        for (int i = 1; i <= 29; i++) {
            sum+=Math.pow(2, i);
        }
        System.out.println(sum);
    }
}
