import java.util.*;

class Numbers
{
   public void EvenFactorsDisplay(int iNo)
   {
         int iCnt = 0;

         for(iCnt =1; iCnt<=(iNo/2);iCnt++)
         {
            if((iNo % iCnt )==0)
            {
                if((iCnt % 2)==0)
                {
                    System.out.prinln("Even factor is : "+iCnt);
                }
            }
         }

   }
}
class program250
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.prinln("Pleas enter number : ");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();
        
        nobj.EvenFactorsDisplay(iNo);
 
    }
}