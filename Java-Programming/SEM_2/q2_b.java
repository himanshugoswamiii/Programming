class A{
    public A(){
        System.out.println("Calling A from C");
    }
    public A(int i) {
        this();
        System.out.println("constructor with int: "+i);
    }
}
class B extends A {
    public boolean B(String msg) { return false; }

    public B(){
        System.out.println("This is B");
    }

    void neww(){
        System.out.println("Class B object is possible");
    }
}

class C extends B {
    private C() { 
        super ();
        System.out.println("This is class C");
    }
    public C(String msg) {this();}
    public C(int i){}
}

class myclass {
    public static void main(String[] args) {
        B myobj=new B();
        myobj.neww();

        C ob2=new C(10); // The constructor C is not visible to other classes
    }
}
