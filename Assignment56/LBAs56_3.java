
import java.io.*;
import java.util.Scanner;


class LBAs56_3
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

        FileWriter fwobj = new FileWriter(FileName);

        fwobj.write("Jay Ganesh...");
    }  
}