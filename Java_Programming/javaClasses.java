class sum{
    int add(int i,int j){
        return i+j;

    }
}
public class javaClasses {
    public static void main(String[] args) {
        sum obj=new sum();
        int ans=obj.add(5, 6);
        System.out.println("Sum is :"+ans);
    }
    
}
