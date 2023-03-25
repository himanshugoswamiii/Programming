import java.awt.event.*;
import java.awt.*;

class DemoList implements ItemListener{
    Frame f=new Frame();
    List choice=new List();
    
    void showframe(){
        choice.add("Yes");
        choice.add("No");
        choice.add("Maybe");

        f.add(choice);

        choice.addItemListener(this);

        f.setLayout(new FlowLayout());
        f.setSize(300,300);
        f.setTitle("DU");
        f.setVisible(true);
    }

    public void itemStateChanged(ItemEvent ae){
        System.out.println(ae);

    }

    public static void main(String[] args) {
        DemoList myObj=new DemoList();
        myObj.showframe();
    }

}
