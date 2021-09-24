import java.util.Scanner;
class employee
{
String emp_name;
int year_of_joining;
long salary;
String address;
public employee(String n,int y,long b,String a)
{
emp_name=n;
year_of_joining = y;
salary=b;
address=a;
}
public static void main(String[] args)
{
employee e1=new employee("david",2002,10000,"chennai");
employee e2=new employee("victor",2003,2000,"chennai");
employee e3=new employee("sam",2005,23455,"mumbai");
System.out.println("\n\tEmployee 1 details : \n");
System.out.println("Name : "+e1.emp_name+"\nYear of joining : "+e1.year_of_joining+"\nSalary : "+e1.salary+"\nAddress : "+e1.address);
System.out.println("\n\tEmployee 2 details : \n");
System.out.println("Name : "+e2.emp_name+"\nYear of joining : "+e2.year_of_joining+"\nSalary : "+e2.salary+"\nAddress : "+e2.address);
System.out.println("\n\tEmployee 3 details : \n");
System.out.println("Name : "+e3.emp_name+"\nYear of joining : "+e3.year_of_joining+"\nSalary : "+e3.salary+"\nAddress : "+e3.address);
}
}
