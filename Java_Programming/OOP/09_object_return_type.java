class Abc 
{		
	int a,b;
	Abc create_obj()
	{
		Abc o=new Abc();
        o.a=10;
		return o;
	}

  public static void main(String[] args) {
	    Abc obj=new Abc();
		obj.a=5;
		obj.b=10;
		Abc obj_new;
		obj_new=obj.create_obj();
		System.out.println("a="+ obj.a +", b="+ obj.b);
		System.out.println("a="+ obj_new.a +", b="+ obj_new.b);
}
}
