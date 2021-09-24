import java.util.Scanner;
class confo
{
public static void main(String args[])
{
Scanner s = new Scanner(System.in);
System.out.println("Type a word(Hi/Hello/Hey) to start the conversation !");
String sd = s.nextLine();
if(sd.equals("Hi"))
{
System.out.println("1. Hi \n2.Hello \n3.Hey \nSelect a number from the given above to build the conversation");
int a = s.nextInt();
switch(a)
{
case 1 : 
	System.out.println("you said Hi");
	break;
case 2 : 
	System.out.println("you said Hello");
	break;
case 3 : 
	System.out.println("you said Hey");
	break;
}
}
else if(sd.equals("Hello"))
{
System.out.println("1. Hi \n2.Hello \n3.Hey \nSelect a number from the given above to build the conversation");
int a = s.nextInt();
switch(a)
{
case 1 : 
	System.out.println("you said Hi");
	break;
case 2 : 
	System.out.println("you said Hello");
	break;
case 3 : 
	System.out.println("you said Hey");
	break;
}
}
else if(sd.equals("Hey"))
{
System.out.println("1. Hi \n2.Hello \n3.Hey \nSelect a number from the given above to build the conversation");
int a = s.nextInt();
switch(a)
{
case 1 : 
	System.out.println("you said Hi");
	break;
case 2 : 
	System.out.println("you said Hello");
	break;
case 3 : 
	System.out.println("you said Hey");
	break;
}
}
else
{
System.out.println("Enter a valid input !");
}
}
}
