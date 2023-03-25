class Abc{
    static Abc obj;
    static Ram ram_obj;
    public static void main(String[] args) {
        obj.show();
        ram_obj.show_Ram();
        
    }
    static void show(){
        System.out.println("show method in Abc class");
    }
}

class Ram{
    static void show_Ram(){
        System.out.println("Show method in Ram class");
    }
}
