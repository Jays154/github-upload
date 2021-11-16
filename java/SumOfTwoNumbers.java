import java.awt.Frame;
import java.awt.Button;
import java.awt.TextField;
import java.awt.Label;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.awt.FlowLayout;

class SumOfTwoNumbers{
	public static void main(String[] args){
		

		Frame f = new Frame();
		Label l1 = new Label();
		Label l2 = new Label();
		Label l3 = new Label();
		Button b1 = new Button();
		b1.setLabel("Addition");
		TextField t1 = new TextField();
		TextField t2 = new TextField();
		l1.setText("Enter first number:");
		l2.setText("Enter second number:");
		f.setVisible(true);
		f.setSize(400,400);
		f.setLayout(new FlowLayout());
		f.add(l1);
		f.add(t1);
		f.add(l2);
		f.add(t2);
		f.add(l3);
		f.add(b1);
		f.addWindowListener(new MyClass());
		}
}
class MyClass extends WindowAdapter{
	public void windowClosing(WindowEvent e){
	System.exit(0);
	}
}