import java.util.Scanner;

public class acad {
	public static void sum(int a , int b)
    {
         System.out.println(a+b);
         
    }
    public static void  sum(String s ,String s1)  
    {
    	String s4 = s+s1;
         System.out.println(s4);
    }
	
	public static void main(String args[])
	{
		Scanner sc= new Scanner(System.in);
		
		int a = sc.nextInt();
		int b = sc.nextInt();
		String s = sc.next();
		String s4 = sc.next();
		sum(a,b);//sum with integer type 
		sum(s,s4);//	sum with String type 
    }
	}
