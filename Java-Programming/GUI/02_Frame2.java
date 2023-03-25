import java.awt.*;
class DemoFrame{
    // Instead of extending the class we'll create a object of FRAME
    void showframe(){
        Frame f=new Frame();
        f.setTitle("DU");
        f.setSize(300,300);
        f.setVisible(true);
    }
    public static void main(String[] args) {
        DemoFrame myObj=new DemoFrame();
        myObj.showframe();
    }
}
