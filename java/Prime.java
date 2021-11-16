class Prime{
	public static void main(String[] arg){
		System.out.print("All the prime numbers from 1 to 10 are: ");
		for(int i=1;i<=10;i++){
			int c=0;
			for(int j=1;j<=i;j++){
				if(i%j==0){
					c=c+1;
				}
				
			}
			
		}
		if(c==2){
				System.out.print(i + " ");	
		}
	}
}
