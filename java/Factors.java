import java.util.Scanner;
class Factors{
	public static void main(String[] args){
		int num;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter a number: ");
		num=sc.nextInt();
		System.out.print("Factors of the entered number are ");
			int i=1;
			do{
				if(num%i==0){
					System.out.print(i + " ");
				}
			i++;
			}while(i<=10);
	}
}	