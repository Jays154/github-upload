class EvenNumbers{
	public static void main(String[] args){
	System.out.print("All the even numbers from 1 to 10 are ");
		int i=1;
		do{
			if(i%2==0){
				System.out.print(i + " ");
			}
		i++;
		}while(i<=10);
	}
}