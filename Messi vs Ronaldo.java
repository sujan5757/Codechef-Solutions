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
		int a=sc.nextInt();
		int b=sc.nextInt();
		int c=sc.nextInt();
		int d,f;
		d= (v*2)+a;
		f=(b*2)+c;
		if(d==f)
		{
		    System.out.println("Equal\n");
		}
		else if(d>f)
		{
		    System.out.println("Messi\n");
		}
		else{
		    System.out.println("Ronaldo\n");
		}
	
		sc.close();
	}
}
