interface A{
    void show1();
}
interface B{
    void show2();
}

class DemoMain implements A,B{
    public void show1(){
        System.out.println("This is show 1");
    }
    public void show2(){
        // ERROR: can't reduce the visibility of inherited method from B
        System.out.println("This is show 2");
    }
    
    public static void main(String[] args) {
        DemoMain myObj=new DemoMain();
        myObj.show1();
        myObj.show2();
    }
}
