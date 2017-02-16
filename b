
import java.util.Scanner;

public class acad {
	
public static void main(String args[])
	{
		Scanner sc= new Scanner(System.in);
		System.out.println("Input");
		int a = sc.nextInt();
		System.out.println("Output");
		for (int i = 1; i <=10; i++) {
			System.out.println(a+"x"+i+"="+i*a);
			
		}
	}

}
