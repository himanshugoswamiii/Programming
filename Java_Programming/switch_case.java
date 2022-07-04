import java.util.Scanner;
public class switch_case {
    int sum(int a,int b){
        return a+b;
    }
    int mul(int a,int b){
        return a*b;
    }

    // Main function
    public static void main(String[] args) {
        switch_case obj=new switch_case();
        Scanner input=new Scanner(System.in);
        System.out.println("Enter values :");
        int v1=input.nextInt();
        int v2=input.nextInt();
        
        System.out.println("Press 1 to find the sum\n 2 to find the product");
        int x=input.nextInt();
        input.close(); // input() should be closed after usage

        switch (x) {
            case 1:
            System.out.println("Sum is: "+obj.sum(v1,v2));
                break;
            case 2:
            System.out.println("Product is: "+obj.mul(v1,v2));
            break;

            default:
                break;
        }

        
    }
}
