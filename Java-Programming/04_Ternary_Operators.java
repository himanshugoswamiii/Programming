import java.util.Scanner;
class Ternary_Operators{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int x,y,max;
        x=input.nextInt();
        y=input.nextInt();

        max=(x>y)?x:y; // Store max among x and y 
        System.out.println("Max value is: "+max);
        input.close();
    }
}
