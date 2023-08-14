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
		int g=sc.nextInt();
		int h,y,k;
		h=v+g;
		y=v*g;
		k=y-h;
		if(k<0)
		{
		    System.out.println(-(k));
		}
		else{
		    System.out.println(k);
		}

		sc.close();
	}
}
