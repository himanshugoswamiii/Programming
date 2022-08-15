class A{
    int x;
    A(){
        x=10;
        System.out.println("x :"+x);
    }
    A(int y){
        this(); // Calls the A()
        System.out.println("y is: "+y);
    }

}

class DemoMain{
    public static void main(String[] args) {
        A myObj=new A(20);
    }
}
