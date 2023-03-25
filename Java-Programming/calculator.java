/**
 * Innercalculator
 */
interface Innercalculator {
    int add(int i,int j);
    int subtract(int i,int j);
    int multiply(int i,int j);
    float division(float i, float j);
    float modular(float i,float j);
}

class mycalc implements Innercalculator{
    public int add(int i,int j){
        // Note : i've to use public keyword here
        return i+j;
    }
    public int subtract(int i,int j){
        return i-j;
    }
    public int multiply(int i,int j){
        return i*j;
    }
    public float division(float i,float j){
        return i/j;
    }
    public float modular(float i,float j){
        return i%j;
    }
}
public class calculator {
    public static void main(String[] args) {
        mycalc myObj=new mycalc();
        int x=5,y=22;
        System.out.println("x is: "+x+" and y is: "+y);
        System.out.println("Sum is: "+myObj.add(x, y));
        System.out.println("Difference is: "+myObj.subtract(x, y));
        System.out.println("Product is: "+myObj.multiply(x, y));
        System.out.println("Division is: "+myObj.division(x, y));
        System.out.println("Modular is: "+myObj.modular(x, y));

    }
}