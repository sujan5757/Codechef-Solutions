/* package codechef; // don't place package name! */


import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int v=sc.nextInt();
		for(int i=0;i<v;i++){
		    int a=sc.nextInt();
		    int b=sc.nextInt();
		    System.out.println(b-a);
		}
		sc.close();
	}
}
