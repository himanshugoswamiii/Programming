import java.io.*;
import java.util.Scanner;
  
class myClass {
    public static void main(String[] args)
    {

        Scanner input=new Scanner(System.in);
        int x=input.nextInt();
        try {
            System.out.println("Inside try block");
  
            // Throw an Arithmetic exception
            System.out.println(34 / x);
        }
  
        // Can not accept Arithmetic type exception
        // Only accept Null Pointer type Exception
        catch (NullPointerException e) {
  
            System.out.println(
                "catch : exception not handled.");
        }
  
        // Always execute
        finally {
  
            System.out.println(
                "finally : i will execute always.");
            input.close(); // Input should always be close
        }
        // This will not execute
        System.out.println("i want to run");
    }
}
