//Java program to display dollar($) using astericks(*)......

import java.util.*; 
class Upper{
     void Vertical_line(int length,int breadth)     //this fucntion prints a vertical line
	 {
		for(int i=0;i<length/2-3;i++)
         {
			for(int j=0;j<breadth;j++)
			{
				if(j==breadth/2-1)
				System.out.print("*");
				else
				System.out.print(" ");
			}
		    System.out.print("\n");
	    }
	 }
	 void horizontal_line(int breadth)          //this fucntion prints a horizontal line
	 {
		for(int j=0;j<breadth;j++)
		System.out.print("*");
	 }
}
public class ajay_assignment{
	public static void main(String[] args) {
	System.out.println("----------Printing $(Dollar) Symbol using *(Astetrick)-----------");
	System.out.print("Enter length:");   //Input length from user
	try           //Exception handling
	{
	Scanner sc = new Scanner(System.in);
	int length= sc.nextInt();
	int breadth= 2*length;
    sc.close();
    
	Upper line1=new Upper();           //Upper class object
	line1.Vertical_line(length, breadth);      

	//This loop displays upper part of dollar($) symbol.
	for(int i=0;i<length;i++)
	{   if(i==0)
		{		
		line1.horizontal_line(breadth);
	    }
		else
		{
		System.out.print("*");
		for(int k=0;k<breadth/2-2;k++)
		System.out.print(" ");
		System.out.print("*");
	    }
	    System.out.print("\n");
	}
	//This loop displays lower part of dollar($) symbol.
	for(int i=0;i<length;i++)
	{   if(i==0)
		{
		line1.horizontal_line(breadth);
		System.out.print("\n");
	    }
		else
		{
		for(int k=0;k<breadth-1;k++)
		{
			if(k==breadth/2-1)
			System.out.print("*");
			else
			System.out.print(" ");
		}
		System.out.println("*");
    	}
	}
        line1.horizontal_line(breadth);	
		System.out.print("\n");
	    line1.Vertical_line(length, breadth);
}
catch(Exception e)
	{
		System.out.println("Invalid Input(Input should be integer)");
	}
 }
}
