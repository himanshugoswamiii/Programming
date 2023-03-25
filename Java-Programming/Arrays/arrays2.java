import java.util.Scanner;
public class arrays2 {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int myArr[]=new int[10]; // Declaration + Memory allocation

        // Input in Array
        for (int i = 0; i < 5; i++) {
            myArr[i]=input.nextInt();
        }

        input.close();

        System.out.println("Your Array is: ");

        // Printing in Array while we've only filled 5 of the values
        for (int i = 0; i < 10; i++) {
            System.out.println(myArr[i]);
        }
    }
}
