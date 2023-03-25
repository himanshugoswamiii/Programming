class A{
    private int x=10;
    private int y=20;
    public int z=30;
    void change(int a,int b){
        x=a;
        y=b;
        System.out.println("Changed x and y private variables");
    }

    void prt(){
        System.out.println("x: "+x);
        System.out.println("y: "+y);
        System.out.println("z: "+z);
    }
}

class privtCls{
    public static void main(String[] args) {
        A ob=new A();
        ob.prt();
        System.out.println(" ------- ");
        ob.z=90;
        ob.change(1,2);
        ob.prt();
    }
}


