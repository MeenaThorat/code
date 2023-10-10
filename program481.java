import java.util.*;

class Program481
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string");
        String str = sobj.nextLine();
           
        char Arr[] = str.toCharArray();
        
        System.out.println(str.length());
        System.out.println(Arr.length);

        int Count = 0;

       
        while(i < Arr.length)

        for(char Ch : Arr)
        {
            if((Arr[i] >= 'A') && (Arr[i]<= 'Z'))
            {
                Arr[i] = (char) (Arr[i] + 32);
               
            }
           
        }
     
        
    }
}