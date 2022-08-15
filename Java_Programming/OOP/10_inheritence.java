// Superclass
class A{
    int a=10,b;
    A(){
        a=5;
        b=10;
    }
}

class B extends A{
    int c;
    B(){
        c=100;
    }
    void printval(){
        System.out.println("a: "+a);
        System.out.println("b: "+b);
        System.out.println("c: "+c);
    }

}

// Subclass
class DemoInheritence extends Abc{
    public static void main(String[] args) {
        B myObj=new B();
        A obj2=new A();
        myObj.printval();
        System.out.println("\n a: "+obj2.a);
    }
}
