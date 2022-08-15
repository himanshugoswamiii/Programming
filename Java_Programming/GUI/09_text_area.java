import java.awt.*;
class DemoTextArea{
    Frame f=new Frame();

    void showframe(){
        String val =
        "Java 8 is the latest version of the most\n" +
        "widely-used computer language for Internet programming.\n" +
        "Building on a rich heritage, Java has advanced both\n" +
        "the art and science of computer language design.\n\n" +
        "One of the reasons for Java's ongoing success is its.";

        TextArea text=new TextArea(val,10,30); // Writing the above in text
        // 10: no of rows and 30 no of columns for characters
        f.add(text);

        f.setLayout(new FlowLayout());
        f.setTitle("DU");
        f.setSize(400,300);
        f.setVisible(true);
    }

    //main
    public static void main(String[] args) {
        DemoTextArea myObj=new DemoTextArea();
        myObj.showframe();
    }
}
