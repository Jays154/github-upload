import java.util.Scanner;
class Student{
	public static void main(String[] args){
		int[][] marks = new int[3][5];
		int[] total = new int[3];
		float[] perc = new float[3];
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter 3 different students 5 different subjects mark: ");
		for(int i=0;i<3;i++){
			for(int j=0;j<5;j++){
				marks[i][j]=sc.nextInt();
			}
		}
		for(int i=0;i<3;i++){
			total[i]=0;
			for(int j=0;j<5;j++){
				total[i]=total[i]+marks[i][j];
			}
		perc[i]=total[i]/500.0f*100;
		}
		for(int i=0;i<3;i++){
			System.out.println("Result of student " + (i+1));
			System.out.println("--------------------------");
			System.out.println("Total = " + total[i]);
			System.out.println("Percentage = " + perc[i]);
			System.out.println();
		}
	}
}
