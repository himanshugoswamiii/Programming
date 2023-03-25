class A {
	protected void show() {
		System.out.println("Hello, I am protected method in class A" );
	}
}

class B extends A
{
	public void show() { //ERROR: overriding method is restrictive
		System.out.println("Hello, I am Public method in class B" );
	}
	
	public static void main(String args []) {
		A obj=new A();
		obj.show();
	}
}
