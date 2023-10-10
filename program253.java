import java.util.*;

class Numbers
{
   public void EvenFactorsDisplay(int iNo)
   {
         int iCnt = 0;

         for(iCnt =2; iCnt<=(iNo/2);iCnt+=2)  // ict = iCnt +2
         {
            if((iNo % iCnt )==0)
           
            {
                
                    System.out.prinln("Even factor is : "+iCnt);
                
            }
         }

   }
}
class program253
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