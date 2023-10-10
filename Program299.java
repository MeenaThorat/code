class Pattern
{
    public void Display(int iNo)
    {
      int iDigit = 0;

      while(iNo != 0)
      {
        iDigit = iNo % 10;
        System.out.print(iDigit+ "\t");
        iNo = iNo /10;

      }
      System.out.println();
        
    }      
    
}

class Program300
{
    public static void main()
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String s = sobj.nextLine();
        
        pobj.Display();
    }
}