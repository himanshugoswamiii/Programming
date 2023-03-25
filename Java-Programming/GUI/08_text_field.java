import java.awt.*;
import java.awt.event.*;
import java.awt.event.ActionListener;

class DemoTextField implements ActionListener{
    TextField name,pass;
    Frame f=new Frame();

    void showframe(){
        Label lname = new Label("Name: ", Label.RIGHT); // Name label
        Label lpass = new Label("Password: ", Label.RIGHT); // Password Label
        name=new TextField(12);
        pass=new TextField(8);
        pass.setEchoChar('*');


        // Adding What happens
        name.addActionListener(this);
        pass.addActionListener(this);

        // Frame related settings
        f.add(lname);
        f.add(name);
        f.add(lpass);
        f.add(pass);

        f.setLayout(new FlowLayout());
        f.setTitle("DU");
        f.setSize(300,300);
        f.setVisible(true);
    }

    public void actionPerformed(ActionEvent ae){
        System.out.println(ae);
    }

    public static void main(String[] args) {
        DemoTextField myObj=new DemoTextField();
        myObj.showframe();
    }
}
