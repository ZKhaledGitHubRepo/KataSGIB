/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{

        string Result = "";
        string myNumberToString = "";
        bool IsEmpty = true;
        
        for (int i = 1; i <= 100; ++i)
        {
            Result = "";
            
            IsEmpty = true;
            
            myNumberToString = to_string(i);
            
            
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
                
                char c = myNumberToString[j];
                if (myNumberToString[j] == '3')
                {
                    Result += "Foo";
                    IsEmpty = false;
                }
                    
                if (myNumberToString[j] == '5')
                {
                    Result += "Bar";
                    IsEmpty = false;
                }
                
                if (myNumberToString[j] == '7')
                {
                    Result += "Qix";
                    IsEmpty = false;
                }
            }
            
            if (IsEmpty == true) Result = to_string(i);

            cout<<"For Number : " << i << " - Result : " << Result << endl;
        }
    

    return 0;
}
