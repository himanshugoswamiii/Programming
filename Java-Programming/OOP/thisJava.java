// Difference b/w this and Local
class ok{
    int x=100;
    void pr(int x){
        
        System.out.println("Value of Local x is "+x);
        System.out.println("Value of Object x is "+this.x);
    }
}
public class thisJava {
    public static void main(String[] args) {

        ok obj=new ok();
        obj.pr(5);
    }
}
