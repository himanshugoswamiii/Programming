class A{
    protected int x=10;
    void pr(){
        System.out.println("x: "+x);
    }

}
public class protectedclass {
    public static void main(String[] args) {
        A ob=new A();
        ob.pr();
        ob.x=20;
        ob.pr();

    }
}
