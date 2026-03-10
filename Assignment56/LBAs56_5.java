
import java.io.File;
import java.util.Scanner;


class LBAs56_5
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        String FileName = null;
        boolean bRet = false;

        System.out.println("Enter the name of file :");
        FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.exists() && fobj.isDirectory())
        {
            System.out.println("Directory present ");

            File fArr[] = fobj.listFiles();

            System.out.println("Number of total file are :"+fArr.length);

            int i = 0;

            for(i = 0; i < fArr.length; i++)
            {
                System.out.println("File Name is :"+fArr[i].getName());
            }
        
        }   
        else
        {

            System.out.println("There is no such folder");
        } 
    }
}