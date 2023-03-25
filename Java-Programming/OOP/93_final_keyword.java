final class B{
    int x=10;
    void show(){
        System.out.println("x is: "+x);
    }
}
class A extends B{
    void show(){
        // ERROR: can't override final method from B
        System.out.println("Overriding final");
    }

    public static void main(String[] args) {
        A myObj=new A();
        myObj.show();
        
    }
}
