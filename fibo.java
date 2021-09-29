import java.util.Scanner;
class fibo
{
static int f1=0,f2=1,f3=0;
public static void fibonacci(int r)
{
if(r>0)
{
f3=f1+f2;
System.out.println(f3);
f1=f2;
f2=f3;
fibonacci(r-1);
}
}
public static void main(String args[])
{
Scanner s = new Scanner(System.in);
System.out.println("Enter the Range : ");
int n = s.nextInt();
System.out.println("Fibonacci Series : \n"+f1+"\n"+f2);
fibonacci(n-2);
}
}
