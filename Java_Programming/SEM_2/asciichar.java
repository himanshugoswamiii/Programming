import java.util.Scanner;
class symbol{
    static void star(){
        // Function that prints the stars
        System.out.print("**");
    }
    static void space(int n){
        // Function that prints the no of space
        for ( int i = 0; i < n; i++) {
                System.out.print("   "); // Prints space
        }
    }

    void greaterthan(int n){
        // Function to print the greater than symbol
        for (int i = 0; i < n; i++) {
            if (i<n/2) {
                space(i);
                star();
                System.out.println();
            }
            else{
                space(n-i-1);
                star();
                System.out.println();
            }
        }
    }
}
class myclass{
    public static void main(String[] args) {
        symbol ob=new symbol();
        int x,choice=1;
        System.out.println("\nThis program display the symbol '>' using '*'");
        System.out.println("For better shape start with initial size - '5'\n");
        Scanner input=new Scanner(System.in);
        while (choice!=0) {
            System.out.println("Enter the size of your symbol");
            try {
                x=input.nextInt();
                if (x<1){
                    System.out.println("\n *** Can't create the Symbol. Enter value greater than 1 *** \n");
                    continue;
                }
                ob.greaterthan(x);
                
            } catch (Exception e) {
                System.out.println("\n****  Exception Arised  ****");
                System.out.println("\nValue can only be integer\n");
                // continue;
                break;
            }
            System.out.println("\n *** Press: *** \n Any integer (other than 0) to continue \n 0 to Exit \n");
            try {
                choice=input.nextInt();
            } catch (Exception e) {
                System.out.println("\n Input can only can be integer\n");
                break;
                // continue;
            }
        }
        input.close();
    }
}
