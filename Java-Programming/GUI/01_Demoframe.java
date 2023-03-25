import java.awt.*;
class DemoFrame extends Frame{
	void showFrame()
	{
		setSize(300,300);//frame size 300 width and 300 height  
	    setTitle("DU");	// now frame has title
		setVisible(true);//now frame will be visible, by default not visible  
	} 
   public static void main(String args[]) {
	 DemoFrame obj=new DemoFrame();
		obj.showFrame();
   }
}
