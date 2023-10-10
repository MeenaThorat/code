import java.util.*;  // scanner class object
class ArrayX
{
   
   public int Arr[];
   

   public ArrayX(int iSize)
   {

     Arr = new int[iSize];

   }

   public void Accept()
    {

     scanner sobj = new scanner(System.int)
     System.out.prinln("Pleae enter "+Arr.length + "elements");
      
      for(int iCnt =0; iCnt< Arr.length; iCnt++)
      {
        System.out.prinln("Enter the element no :"+(iCnt+1));
        Arr[iCnt] = sobj.nextInt();
      }
    }
   public void Display()
   {
    String.out.prinln("Elements of array are :");

    for(int iCnt =0; iCnt < Arr.length; iCnt++);
    {
        System.out.print(Arr[iCnt]+"\t");

    }
    System.out.prinln();
   }

}

class Program259

{
    public static void main(String ar[])
    {
        ArrayX obj = new ArrayX(5);
        obj.Accept();
         obj.Display();

    }
}