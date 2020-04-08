/* Write the code to perform multiple exception handling */
#include <iostream>
 using namespace std;
 
int main()
{
    int choice;
     
    try
    {
        cout<<"Enter any choice: "; 
        cin>>choice;
        if(choice == 0)         
		cout<<"MY Project!"<<endl;
        else if(choice == 1)    
		throw (100);   
        else if(choice == 2)    
		throw ('x');   
        else if(choice == 3)    
		throw (1.23f);  
        else    cout<<"Bye Bye !!!"<<endl;
    }
    catch(int a)
    {
        cout<<"Integer Exception Block, value is: "<<a<<endl;
    }
    catch(char b)
    {
        cout<<"Character Exception Block, value is: "<<b<<endl;
    }   
    catch(float c)
    {
        cout<<"Float Exception Block, value is: "<<c<<endl;
    }       
     
    return 0;
}
