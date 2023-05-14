#include <iostream>
#include <iomanip>
using namespace std;
class Time{
	private:
		int hour;
		int minute;
		int second;
	public:
		Time(int a=0,int b=0, int c=0){
			hour=a;
			minute=b;
			second=c;
	
	if (a>24 || b>60 || c>60){
		cout<<"Input is Invaid !!"<<endl;
		}}
//setfunctions
	void setTime(int a,int b, int c)
		{hour=a;minute=b;second=c;}
	void setHour(int a)
		{hour=a;}
	void setMinute(int b)
		{minute=b;	}
	void setSecond(int c)
		{second=c;	}
	
//getfunctions
	int getHour()
		{return hour;}
	int getMinute()
		{return minute;}
	int getSecond()
		{return second;}
		
//display_Functions
	void printUniversal()
			{cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<endl;}

	void printStandard(){
			if( hour==0 || hour==12 || hour==24 )
	{
			if(hour==0)
			{cout<<setfill('0')<<setw(2)<<12<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<" AM"<<endl;}
			if(hour==12)
			{cout<<setfill('0')<<setw(2)<<12<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<" PM"<<endl;}
			if(hour==24)
			{cout<<setfill('0')<<setw(2)<<12<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<" AM"<<endl;}
	}
	else
	{
			if(hour>0 && hour<12  )
			{cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<" AM"<<endl;}
			else if(hour>12 && hour<24)
			{cout<<setfill('0')<<setw(2)<<hour-12<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<" PM"<<endl;}
	}
	}
};


int main() {
  Time t1; 
	Time t2( 2 );  
	Time t3( 21, 34 ); 
	Time t4( 12, 25, 42 ); 
	
	cout << "Constructed with:\n\nt1:all arguments defaulted\n" ; 
	t1.printUniversal(); 
	cout << "\n" ; 
	t1.printStandard(); 
	
	cout << "\n\nt2: hour specified; minute and seconddefaulted\n "; 
	t2.printUniversal();  
	cout << "\n" ; 
	t2.printStandard(); 
	
	cout << "\n\nt3: hour andminute specified; seconddefaulted\n "; 
	t3.printUniversal(); 
	cout << "\n" ; 
	t3.printStandard(); 
	
	cout << "\n\nt4: hour, minute andsecond specified\n "; 
	t4.printUniversal();  
	cout << "\n" ; 
	t4.printStandard(); 
	
	Time t5( 27, 74, 99 );
	return 0;
}

