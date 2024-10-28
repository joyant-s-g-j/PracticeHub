public class right_num_tri {
    
    public static void main(String[] args) {
        /*
        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
         */
        for(int i=1;i<=5;i++)
        {
            for(int j=1;j<=i;j++)
            {
                for(int num=j;num<=j;num++)
                {
                    System.out.print(num + " ");
                }
            }
            System.out.print("\n");
        }
    }
}
