import java.util.*;

class Digit
{
    public boolean CheckArmstrong(int iNo)
    {
        int iCnt = 0;
        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo / 10;

        }
        return iCnt;

    }
    private int Power(int Base , int index)
    {
         int iAns =1;

         for (Int iCnt =1 ; iCnt <= index; iCnt++)
         {
            iAns = iAns * Base;

         }
         return iAns;
    }
    public boolean CheckArmstrong(int iNo)
    {

        int  iTemp = iNo;
        int  iSum =0;
        int  iDigit =0;
        int  iRet =0;
         
         int iCount = CountDigits(iNo);
    
         while (iNo != 0)
         {

            iDigit = iNo % 10;

            iRet = Power(iDigit, iCount);
            iSum = iSum + iRet ;

            iNo = iNo / 10;
            
         }
        if(iSum == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }

      
    }
}

class program255
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.prinln("Pleas enter number : ");
        int iNo = sobj.nextInt();

        Digit nobj = new Numbers();

        boolean bRet = nobj.CheckArmstrong(iNo);
        if(bRet == true)
        {
            System.out.prinln(iNo+"is a armstrong number");

        }
        else

        {
            System.out.prinln(iNo+ " is not a armstrong number");
        }
    }
  
}   