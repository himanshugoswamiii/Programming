public class labelled_Continue {
    public static void main(String[] args) {
        outer:for (int i = 0; i < 2; i++) {
            // Here outer is a label
            for (int j = 0; j < 5; j++) {
                if (j==2 && i==1){
                    continue outer;
                }
                System.out.println("i="+i);
                System.out.println("j is :"+j);
            }

            System.out.println("\nOut of inner LOOP\n"); // This won't run the second time
        }
        System.out.println("Out of outer LOOP");
    }
}
