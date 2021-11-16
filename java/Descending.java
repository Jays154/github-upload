import java.util.Scanner;
class Descending{
	
		public static void main(String[] args){
			int b,s;
			Scanner sc=new Scanner(System.in);
			System.out.print("Enter the bigger number :");
			b=sc.nextInt();
			System.out.print("Enter the smaller number :");
			s=sc.nextInt();
			System.out.print("Nos in descending oredr are :");
				for(int i=b;i>=s;i--){
					System.out.print(i +" ");
				}
		}
}
