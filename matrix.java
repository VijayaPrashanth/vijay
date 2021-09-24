import java.util.*;
import java.util.Scanner;
class matrix
{
public static void main(String args[])
{
Scanner s = new Scanner(System.in);
int a[][] = new int[3][3];
int b[][] = new int[3][3];
int sum[][]=new int[3][3];
int m[][] = new int[3][3];
System.out.println("Enter the elements of Matrix A : ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
a[i][j] = s.nextInt();
}
}
System.out.println("Enter the elements of Matrix B : ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
b[i][j] = s.nextInt();
}
}
System.out.println("Addition of two matrices : ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
sum[i][j]=a[i][j]+b[i][j];
}
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
System.out.print(sum[i][j]);
System.out.print("\t");
}
System.out.println();
}
System.out.println("Multiplication of two matrices :  ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
for(int k=0;k<3;k++)
{
m[i][j]+=a[i][k]*b[k][j];
}
}
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
System.out.print(m[i][j]);
System.out.print("\t");
}
System.out.println();
}
}
}
