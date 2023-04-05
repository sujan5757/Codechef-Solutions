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
		while(v-->0){
		    int f=sc.nextInt();
		    int c=sc.nextInt();
		    int g=0;
		    int j=c;
		    int i;
		    for(i=0;i<f;i++){
		        if(j<f){
		            j+=i;
		        }
		        if(j>=f){
		            break;
		        }
		      
		    }
	
		    System.out.println(i);
		}
		sc.close();
	}
}
