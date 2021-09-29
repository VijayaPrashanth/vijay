import java.util.Scanner;
class primenumber
{
public static void main(String args[])
{
Scanner sc = new Scanner(System.in);
System.out.println("Enter a value");
int n = sc.nextInt();
boolean flag = true;
if(n==1)
{
System.out.println(n+" is neither prime nor composite");
}
else
{
for(int i=2;i<n;i++)
{
if(n%i==0)
{
flag=false;
break;
}
}
if(flag)
{
System.out.println(n+" is a prime number");
}
else
{
System.out.println(n+" is not a prime number");
}
}
}
}
