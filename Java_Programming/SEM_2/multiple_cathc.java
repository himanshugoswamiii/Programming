import java.util.Scanner;
class Test
{
    public static void main(String args[])
    {
        Scanner scn = new Scanner(System.in);
        try
        {
            int n = Integer.parseInt(scn.nextLine());
           
            if (99%n == 0)
                System.out.println(n + " is a factor of 99");
            else
                System.out.println(n + " is not a factor of 99");
        }
        catch (ArithmeticException ex)
        {
            System.out.println("Arithmetic " + ex);
        }
        catch (NumberFormatException ex)
        {
            System.out.println("Number Format Exception " + ex);
        }
        finally{
            System.out.println("This is finally block");
            scn.close(); // Closing the input
        }

        System.out.println("This is the REST OF THE CODE");
    }
}
