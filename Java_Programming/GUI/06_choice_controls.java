import java.awt.*;
import java.awt.event.*;
import java.awt.event.ItemListener;

class DemoChoiceControl implements ItemListener{
    Frame f=new Frame();
    Choice chs=new Choice();

    void showframe(){
        chs.add("yes");
        chs.add("no");
        chs.add("maybe");

        f.add(chs);

        f.setLayout(new FlowLayout());
        chs.addItemListener(this);

        f.setSize(300,300);
        f.setTitle("Himanshu");
        f.setVisible(true);
    }

    public void itemStateChanged(ItemEvent ae){
        System.out.println(ae);
    }

    public static void main(String[] args) {
        DemoChoiceControl myObj=new DemoChoiceControl();
        myObj.showframe();
    }

}
