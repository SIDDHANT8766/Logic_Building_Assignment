
import java.io.*;
import java.util.Scanner;


class LBAs56_2
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        String FileName = null;
        boolean bRet = false;

        String Buffer = null;

        System.out.println("Enter the name of file :");
        FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.exists())
        {
            System.out.println("File is exist");

            FileInputStream fiobj = new FileInputStream(fobj);

            byte Arr[] = new byte[50];       // Imp 

            fiobj.read(Arr);    // issue  It is read data in bytes so we have to convert it into string 

            String str = new String(Arr);  // Solve

            System.out.println(str);  

        }
        else
        {
            System.out.println("Unable to create file");
        } 
    }
}