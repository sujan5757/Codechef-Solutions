/* package codechef; // don't place package name! */

import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
		int a=sc.nextInt();
		int b=sc.nextInt();
		int c=sc.nextInt();
		if((a+b)<=c)
		{
		   System.out.println("2");
		}
		else if(a>c)
		{
		   System.out.println("0");
		}
		else
		{
		   System.out.println("1");
		}
		}

	
		sc.close();
	}
}
