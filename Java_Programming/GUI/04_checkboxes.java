import java.awt.*;
import java.awt.event.*;
class DemoFrame extends Frame implements ItemListener{
	Checkbox yes, no, maybe;
	void showFrame()
	{			
		yes = new Checkbox("Yes");
		no = new Checkbox("No");
		maybe = new Checkbox("Undecided");
		setLayout(new FlowLayout());
		add(yes);   
        add(no);   
        add(maybe);
		yes.addItemListener(this);
		no.addItemListener(this);
		maybe.addItemListener(this);
		setSize(300,300); 
		setTitle("DU"); 
		setVisible(true);	
    }

    public void itemStateChanged(ItemEvent ae)
    {
            System.out.println(ae);
    }    

    public static void main(String args[]) {
        DemoFrame obj=new DemoFrame();
        obj.showFrame();
       }
}
