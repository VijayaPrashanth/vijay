import java.util.Scanner;
class minutes
{
public static void main(String args[])
{
minutes m = new minutes();
Scanner s = new Scanner(System.in);
System.out.println("Enter the no.of.minutes : ");
int min = s.nextInt();
int r,rem,q;
rem = min%(365*24*60);
r=m.year(min);
q = m.day(rem);
System.out.println(min+" minutes is approximately "+r+" years "+q+" days ");
}
public int year(int y)
{
int years;
years=y/(365*24*60);
return years;
}
public int day(int x)
{
int days;
days = x/(24*60);
return days;
}
}
