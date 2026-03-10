
import java.io.File;
import java.util.Scanner;


class LBAs56_1
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        String FileName = null;
        boolean bRet = false;

        System.out.println("Enter the name of file :");
        FileName = sobj.nextLine();

        File fobj = new File(FileName);

        bRet = fobj.createNewFile();

        if(bRet == true)
        {
            System.out.println("File created successfully");
        }
        else
        {
            System.out.println("Unable to create file");
        } 
    }
}