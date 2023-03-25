class A{
    int x=10;
    A(){
        // Whis won't run now
        System.out.println("x is: "+x);
    }

    A(int y){
        int sum=x+y;
        System.out.println("Sum is: "+sum);

    }
}

class B extends A{
    B(){
        System.out.println("Default Constructor");
    }
    B(int y){
        super(y);
    }
    /* void callSuper(int y){
        super(y);
        // ERROR:Constructor call must be first statement
    } */

    public static void main(String[] args) {
        B myObj=new B(20);
        
    }
}
