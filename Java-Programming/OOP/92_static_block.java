class A {
	static int a = 5;
	static int b;
	static void show(int x) {
		System.out.println("x = " + x);
		System.out.println("a = " + a);
		System.out.println("b = " + b);
	}
	static {
        // Notice this is working similar to a method
		System.out.println("Static block initialized.");
		b = a * 5;
	}
	public static void main(String args []) {
		show(10);
	}
}
