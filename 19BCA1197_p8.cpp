#include<iostream> 
#include<string.h>
using namespace std; 
class student 
{
   int rollno;
   char name[20];
   class Address
    {
      	private:
      		int houseNo;
      		char street[20];
      		char city[20];
      		char state[20];
      		char pincode[7];
      	public:
		  	void setAddress(int h,char *s,char *c,char *st,char *p)
		  	{
		  	    houseNo*h;
			    strcpy(street,s);
			    strcpy(city,c);
			    strcpy(state,st);
			    strcpy(pincode,p);
			}
			void showAddress()
			{
				cout<<"\n"<<houseNo<<endl;
				cout<<street<<" "<<city;
				cout<<" "<<pincode<<endl;
				cout<<state;
			}
	};
			Address add;
		public:
		    void setRollno(int r)
		    {
		    	rollno=r;
			}
			void setName(char n)
			{
				strcpy(name,n);
			}
			void setAddress(int h, char *s, char *c, char *st, char *p)
		  	{
		  		add.setAddress(h,s,c,st,p);
		  		
		    }
		    void showStudent()
		    {
		    	cout<<"student Data:"<<endl;
		    	cout<<Rollno<<" ";
		    	cout<<name<<" ";
		    	cout<<add.showAddress();
			}
	class Result
	{
		 private:
        int totalM;
        float perc;
        char grade;
    public:
        void getResultInfo(void);
        void putResultInfo(void);		
	};	    
};
int main() 
{
	student s1;
	s1.setRollno(97);
	s1.setName("JATIN");
	s1.setAddress(515,"Sky Street","Rajpura","Punjab","140401");
	s1.showStudent();
	s1.Result;
   return 0;
}
