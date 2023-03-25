class ok{
    final int x=10;
}

class what extends ok{
    void pr(){
        System.out.println(x);
    }
}


public class finalJava {
    public static void main(String[] args) {
        what obj=new what();
        obj.pr();
        
    }
}
