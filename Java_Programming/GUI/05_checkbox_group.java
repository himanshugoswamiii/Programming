import java.awt.*;
import java.awt.event.*;

class DemoCheckBox implements ItemListener{
    Checkbox yes,no,maybe;
    Frame f=new Frame(); // Object of class frame

    void showFrame(){
        CheckboxGroup cbg=new CheckboxGroup();

        // Checkboxes
        yes = new Checkbox("Yes", cbg, false);
        no = new Checkbox("No", cbg, false);
        maybe = new Checkbox("Undecided", cbg, false);		

        // Layout
		f.setLayout(new FlowLayout());

        f.add(yes);
        f.add(no);
        f.add(maybe);

        yes.addItemListener(this);
        no.addItemListener(this);
        maybe.addItemListener(this);

        f.setSize(300,300);
        f.setTitle("Himanshu");
        f.setVisible(true);

    }

    public void itemStateChanged(ItemEvent ae)
    {
            System.out.println(ae);
    }    

    // Main Function
    public static void main(String[] args) {
        DemoCheckBox myObj=new DemoCheckBox();
        myObj.showFrame();
        
    }
}
