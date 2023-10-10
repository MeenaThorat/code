import java.util.*;

class Numbers
{
   public int FactorsMultiplicatiion(int iNo)
   {
         int iCnt = 0;
         int iMult = 1;
        
       
         for(iCnt =1; iCnt <= (iNo/2);iCnt++)  // ict = iCnt +2
         {
            if((iNo % iCnt )==0)
           
            {
                
                iMult = iMult * iCnt;
                
            }
         }
        return iMult;
   }
}
class program255
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.prinln("Pleas enter number : ");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();
        
        int iRet =nobj.FactorsMultiplicatiion(iNo);

        System.out.prinln("Multiplication of factors of "+ iNo +"is :"+iRet)
 
    }
}