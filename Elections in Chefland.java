/* package codechef; // don't place package name! */

import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int v=sc.nextInt();
		for(int i=0;i<v;i++){
		    int f=sc.nextInt();
		    int c=sc.nextInt();
		    int[]u=new int[f];
		    for(int j=0;j<f;j++){
		        u[j]=sc.nextInt();
		    }
		    int s=0;
		    for(int j=0;j<f;j++){
		        if(u[j]>=c){
		            s++;
		        }
		    }
		    System.out.println(s);
		}
		sc.close();
	}
}
