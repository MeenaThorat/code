import java.util.*;
class Arithematic
{
    public int Addition(int i, int j)
      {
         int Sum =0;
          Sum = i + j;
         return Sum;
      }
    
}
class program248
{
    
    public static void main(String arg[])
    {
      
      Scanner sobj = new Scanner(System.in);

      int iNo1 =0, iNo2 =0, iAns =0;
      
      System.out.prinln("Enter first number :");
      iNo1 = sobj.nextInt();

      System.out.prinln("Enter second number :");
      iNo2 = sobj.nextInt();

      Arithematic aobj = new Arithematic();
      iAns = aobj.Addition(iNo1,iNo2);

      System.out.prinln("Addition is :"+iAns);

    }
}