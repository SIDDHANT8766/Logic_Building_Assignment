
import java.io.File;
import java.util.Scanner;


class LBAs56_4
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        String FileName = null;
        boolean bRet = false;

        System.out.println("Enter the name of file :");
        FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.exists())
        {
            System.out.println("File aready exist");
        }
        else
        {
            bRet = fobj.createNewFile();

            System.out.println("File Created successfully");
        } 
    }
}