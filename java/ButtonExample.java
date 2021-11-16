import java.awt.Frame;
import java.awt.Button;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
class ButtonExample{
	public static void main(String[] args){
		Frame f = new Frame();
		Button b = new Button();
		f.add(b);
		f.setVisible(true);
		f.setSize(400,400);
		f.addWindowListener(new MyClass());
		}
}
class MyClass extends WindowAdapter{
	public void windowClosing(WindowEvent e){
	System.exit(0);
	}
}
