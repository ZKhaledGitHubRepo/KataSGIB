public class MyClass {
    public static void main(String args[]) {

        String Result = "";
        String myNumberToString = "";
        Boolean IsEmpty = true;
        
        for (int i = 1; i <= 100; ++i)
        {
            Result = "";
            
            IsEmpty = true;
            
            myNumberToString = Integer.toString(i);
            
            
            if (i%3 == 0)
            {
                Result = "Foo";
                IsEmpty = false;
            }
            
            if (i%5 == 0) 
            {
                Result += "Bar";
                IsEmpty = false;
            }
            
            for (int j=0; j<myNumberToString.length(); ++j)
            {
                if (myNumberToString.charAt(j) == '3')
                {
                    Result += "Foo";
                    IsEmpty = false;
                }
                    
                if (myNumberToString.charAt(j) == '5')
                {
                    Result += "Bar";
                    IsEmpty = false;
                }
                
                if (myNumberToString.charAt(j) == '7')
                {
                    Result += "Qix";
                    IsEmpty = false;
                }
            }
            
            if (IsEmpty == true) Result = Integer.toString(i);

            System.out.println("For Number : " + i + " - Result : " + Result);
        }
        
    }
}
