import java.awt.*;
import java.awt.event.*;
class DemoButton implements ActionListener{
	Button yes, no, maybe; // Button CLASS
	String msg;
	void showFrame() 	{					

        // We've not extended the Frame class instead we made an object of frame class
        Frame f=new Frame(); // Frame CLASS
        yes = new Button("Yes");
		no = new Button("No");
		maybe = new Button("Undecided");

        // Which class the setlayout
		f.setLayout(new FlowLayout());

        // Where does add came from ?  -- Frame class
		f.add(yes); 	
        f.add(no); 	
        f.add(maybe);

		yes.addActionListener(this);
		no.addActionListener(this);
		maybe.addActionListener(this);

        // Frame
		f.setSize(300,300);
		f.setTitle("DU"); 	
		f.setVisible(true); 	
    }

    public void actionPerformed(ActionEvent ae) {
        String str = ae.getActionCommand();
        if(str.equals("Yes")) {
            msg = "You pressed Yes.";
            System.out.println(msg);
        }
        else if(str.equals("No")) {
            msg = "You pressed No.";
            System.out.println(msg);
        }
        else {
            msg = "You pressed Undecided.";
            System.out.println(msg);
        } 
    }    

    // MAIN FUNCTION
    public static void main(String args[]) {
        DemoButton obj=new DemoButton();
        obj.showFrame();
       }

}
