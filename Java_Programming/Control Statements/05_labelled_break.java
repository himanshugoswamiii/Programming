class labelledBreak{
    public static void main(String[] args) {
        outer: for(int i=0; i<3; i++) {
                System.out.print("Pass " + i + ": ");
                for(int j=0; j<100; j++) {
                    if(j == 10) 
                        break outer; 
                        // Break form inner as well as outer
                    System.out.println(j + " ");
                }
            System.out.println("This is in outer loop");
            // This won't execute
            }
        System.out.println("Loops complete.");
    }
}
