import java.util.*;
class Program269
{
    public static void main(String Ar[])

    {
       Scanner sobj = new Scanner (System.in);

       System.out.println("Pleasee enter your full name :");
       String str = sobj.nextLine();

       System.out.println("Number of chacarecter are :"+str.length());
    
      for(int i =0; i< str.length(); i++)
      {
         System.out.println(str.charAt(i));
      }
    }
}