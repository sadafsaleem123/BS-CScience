#include <iostream>
#include <iomanip>
using namespace std;
class Time{
	public:
		Time(int a=0,int b=0,int c=0){
			hour=a;
			minute=b;
			second=c;
			if (a>24 || b>60 || c>60){
				cout<<"Wrong input"<<endl;
				if(a>24){
					cout<<"input is exceeding hours limit"<<endl;
				}
				if(b>60){
					cout<<"input is exceeding minutes limit"<<endl;
				}
				if(c>60){
					cout<<"input is exceeding seconds limit"<<endl;
				}
			}
		}
		void setTime(int a,int b,int c){
			hour=a;minute=b;second=c;
		}
		void setHour(int a){
			hour=a;
		}
		void setMinute(int a){
			minute=a;
		}
		void setSecond(int a){
			second=a;
		}
		int getHour(){
			return hour;
		}
		int getMinute(){
			return minute;
		}
		int getSecond(){
			return second;
		}
		void printUniversal(){
			cout<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<endl;
		}
		void printStandard(){
			if( hour==0 || hour==12 || hour==24 ){
				if(hour==0){
					cout<<setfill('0')<<setw(2)<<12<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<" AM"<<endl;
				}
				if(hour==24){
					cout<<setfill('0')<<setw(2)<<12<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<" AM"<<endl;
				}
				if(hour==12){
					cout<<setfill('0')<<setw(2)<<12<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<" PM"<<endl;
				}
			}
			else { if(hour<12 && hour>0){
						cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<" AM"<<endl;
					}
					else if(hour>12 && hour<24){
						cout<<setfill('0')<<setw(2)<<hour-12<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<" PM"<<endl;
					}
			}
		}
	private:
		int hour;
		int minute;
		int second;
};
int main(){
	Time t1,t2(0,0,0),t3(0,25,36),t4(12,0,0),t5(15,58,59),t6(24,0,0);
	t1.setTime(3,5,58);
	t1.printUniversal();
	t2.printUniversal();
	t3.printUniversal();
	t4.printUniversal();
	t5.printUniversal();
	t6.printUniversal();
	t1.printStandard();
	t2.printStandard();
	t3.printStandard();
	t4.printStandard();
	t5.printStandard();
	t6.printStandard();
	
}
