import java.util.*;

/* Input  Hello

  H  e   l   l  o  
  H  e   l   l  o  
  H  e   l   l  o  
  H  e   l   l  o  
  H  e   l   l  o     
  
  
  */

class Pattern
{
    public void Display(String str)
    {
        char Arr[] = str.toCharArray();

        int i =0, j=0;
        
        for(i = 0; i< Arr.length ; i++)
        {
            for(j =0; j < Arr.length ; j++)
            {
                System.out.prinln(Arr[j]+"\t");

            }
            System.out.println();
        }
    }
    
}

class Program295
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        String s = sobj.nextLine();
        
        pobj.Display(i,j);
    }
}