#include<iostream>
#include<conio.h>
#include<math.h>
void submenu1();//if else
void submenu2();//for                                              //declaration
void submenu3();//do-while
void submenu4();//switch
void submenu5();//mega programs
void submenu6();//cout cin
void submenu7();//functions
bool isprime(int); 												//declaration
void multiply(int,int); 										//declaration
int maximum(int a,int b);										//decl
int HCF(int,int);                							   //prototype
int ispositive(int a);       									//declaration
int factorial(int); 													//decl
void mobileservice1();																	//decl
void mobileservice2();




using namespace std;
int main()
{
	int n1;
	while(1){
		system ("CLS");
		cout<<" ------------'MAIN MENU'-------------"<<endl;
		cout<<""<<endl;
		cout<<"Press 1 for if-else loop functions"<<endl;
		cout<<"Press 2 for for loops functions"<<endl;
		cout<<"Press 3 for do-while loop functions"<<endl;
		cout<<"Press 4 for switch functions"<<endl;
		cout<<"Press 5 for mega programs"<<endl;
		cout<<"press 6 for cout and cin practise "<<endl;
		cout<<"press 7 for function practise "<<endl;
		cin>>n1;
switch (n1){
case 1:
		submenu1();                                                                                      //call
	    break;
case 2:
	    submenu2();
		break;	
case 3:
		submenu3();
	    break;	
case 4:
	    submenu4();
		break;	
case 5:
		submenu5();
	    break;	
case 6:
	    submenu6();
		break;				
case 7:
		submenu7();
		break;
		}
	    }	
        }
void submenu1()                                                                                            
{	system ("CLS");
        int n2;
    	while(1){system("cls");
		cout<<"           IF-ELSE MENU             "<<endl;
		cout<<""<<endl;
		cout<<"Press 1 to find HCF and LCM of a number"<<endl;
		cout<<"Press 2 to check whether given numbers is in upper or lower case"<<endl;
		cout<<"Press 3 to check whether a number is real or imaginary"<<endl;
		cout<<"Press 4 to check whether given number is even or odd"<<endl;
		cout<<"Press 5 to check whether the number is vowel or consonant"<<endl;
		cout<<"Press 6 To go Back"<<endl;
		cin>>n2;
switch(n2){
case 1:
    {
    system ("CLS");	
    int n1, n2,HCF,LCM;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    while(n1 != n2)
    {
    if(n1 > n2)
    n1 -= n2;
    else
    n2 -= n1;
    }
    HCF=n1;
    cout << "HCF = "<<HCF;
	LCM=(n1*n2)/HCF;	
    cout<<"LCM = "<<LCM;	
    }
	break;
case 2:
	{
	system ("CLS");
    char ch;
    cout<<"enter a lowercase number ";
    cin>>ch;
    ch=ch-32;                                   //a -  A 
    cout<<"number in lower casr is "<<ch ;     //97 - 65 = 32
    }          
	getch();
	break;
case 3:
   {
   	system ("CLS");
   float a,b,c,d,e,f;
   cout<<"Enter value of a b and c"<<endl;
   cin>>a>>b>>c;
   d=sqrt(b*b-4*a*c);
   e=(-b+d)/(2*a);
   f=(-b-d)/2*a;
   if(d>0) cout<<"The roots are:"<<endl<<e<<endl<<f; 
   else cout<<"The roots are imaginary\n";	
   getch();	
   }
   break;
case 4:
	{
	system("cls");
	int n;
	cout<<"Enter a number: "<<endl;
	cin>>n;
	if(n%2==0)
	cout<<"The number "<<n<<" is even.";
	else
	cout<<"The number "<<n<<" is odd.";
	getch();
	}
	break;
case 5:
	{
	char ch;
	cout<<"Enter a character : "<<endl;
	cin>>ch;
	if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	cout<<"Character "<<ch<<" is vowel.";
	else
	cout<<"Character "<<ch<<" is consonant.";
	}
	getch();
	break;
case 6:
	return;
	}
	getch();
	}
    }
void submenu2()
{ 	system("CLS");
	int n2;
	while(1)
	{
	system("cls");
	cout<<"          FOR LOOPS MENU            "<<endl;
	cout<<""<<endl;
	cout<<"Press 1 to display top left pyramid"<<endl;
	cout<<"Press 2 to display bottom left pyramid"<<endl;
	cout<<"Press 3 to Diamond pattern of stars"<<endl;
	cout<<"Press 4 to display Square of stars"<<endl;
	cout<<"Press 5 To go Back"<<endl;
	cin>>n2;
	switch(n2){
case 1:
	{
	int i, j, row;
    cout << "Enter number of rows: ";
    cin >> row;
    for(i = row; i >= 1; i--)
    {
    for(j = 1; j <= i; j++)
    {
    cout << "* ";
    }
    cout << "\n";
    } 
    }
    getch();
    break;
case 2:
    { int i,n,j;   	 
    cout << "Enter number of rows: ";
    cin >> n;
    for(i = 1; i <= n; i++)
    {      
	for(j = 1; j <= i; j++)
    {
    cout << "* ";
    }
    cout << "\n";
	}
	}
	getch();
	break;
case 3:
	{
	int n, c, k, space=1;
    cout<<"Enter number of rows  : ";
    cin>>n;
    space=n-1;
    for (k=1; k<=n; k++)
    {
	for(c=1; c<=space; c++)
	{
	cout<<" ";
	}
	space--;
	for(c=1; c<=(2*k-1); c++)
	{
	cout<<"*";
	}
	cout<<"\n";
    }
    space=1;
    for(k=1; k<=(n-1); k++)
    {
	for(c=1; c<=space; c++)
	{
	cout<<" ";
	}
	space++;
	for(c=1 ; c<=(2*(n-k)-1); c++)
	{
	cout<<"*";
	}
	cout<<"\n";
    }
    }
	break;		
case 4:
	{
	int n,i,j;
	cout<<"Enter number to print square :"<<endl;
	cin>>n;
	for(i=1;i<=n;++i)
	{
	for(j=1;j<=n;++j)
	{
	cout<<"* ";
	}
	cout<<endl;
	}
	}
	break;			
case 5:			
	return;
	}
	getch();
	}	
	}
void submenu3(){	
	system("CLS");
	int n3;
	while(1){
	system("cls");
	cout<<"              DO-WHILE SWITCH             "<<endl;
	cout<<""<<endl;
	cout<<"press 1 to find tabe of a number "<<endl;
	cout<<"press 2 to find factorial of a number "<<endl;
	cout<<"press 3 to find LCM of numbers "<<endl;
	cout<<"press 4 to find HCF of numbers "<<endl;
	cout<<"Press 5 to go back "<<endl;
	cin>>n3;
switch(n3){
case 1:
	{
	int n,c=1;
    cout<<"Enter number to print its table=";
    cin>>n;
	while(c<=10)
    {
    cout<<n<<" * "<<c<<" = "<<n*c<<endl;
    c++;
    }
	}
	break;
case 2:
	{
	int n,f=1,i=1;
    cout<<"\n Enter The Number:";
    cin>>n;
    do
    {
    f=f*i;
    i++;
    }
	while(i<=n);
    cout<<"\n The Factorial of "<<n<<" is "<<f;
	}
	getch();
	break;
case 3:
	{
	int n1, n2, max;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    max = (n1 > n2) ? n1 : n2;
    do
    {
    if (max % n1 == 0 && max % n2 == 0)
    {
    cout << "LCM = " << max;
    break;
    }
    else
    ++max;
    } while (true);
	}
	break;
case 4:
	{
	int n,d,rem;
	cout<<"Enter numerator:"<<endl;
	cin>>n;
	cout<<"Enter denominator : "<<endl;
	cin>>d;
	do{
	rem=n%d;
	n=d;
	d=rem;
	}
	while(rem!=0);
	cout<<"HCF of numbers is "<<n;
	}
	break;
case 5:
	return;
	getch();
	}
	getch();
	}
	}
void submenu4(){
	system("CLS");
	int n4;
	while(1){
	system("cls");
	cout<<"            SWITCH PROGRAMS MENU             "<<endl;
	cout<<""<<endl;
	cout<<"press 1 program to check a character wherther it is vowel or consonant"<<endl;
	cout<<"press 2 program to perform mathematical operation"<<endl;
	cout<<"press 3 to make basic calculator"<<endl;
	cout<<"press 4 to go back"<<endl;
	cin>>n4;
switch(n4)
	{
case 1:
 	{
	char c;
	cout<<"enter an alphabet="<<endl;
	cin>>c;
	switch(c)
	{
	case'a':
	case 'A':
		cout<<"You entered vowel"<<endl;
		break;
	case'e':
	case 'E':
		cout<<"You entered vowel"<<endl;
		break;
	case'i':
	case 'I':
		cout<<"You entered vowel"<<endl;
		break;
	case'o':
	case 'O':
		cout<<"You entered vowel"<<endl;
		break;
	case'u':
	case 'U':
		cout<<"You entered vowel"<<endl;
		break;
	default:
	cout<<"you entered consonant"<<endl;
	}
	getch();
	break;	
	}
case 2:
	{
	float a,b;
	char op;
	cout<<"enter 1st number=";
	cin>>a;
	cout<<"enter 2nd number=";
	cin>>b;
	cout<<"enter an operator=";
	cin>>op;
	switch(op)
	{
case'+':
	cout<<a+b<<endl;
	break;
case'-':
	cout<<a-b<<endl;
	break;
case'*':
	cout<<a*b<<endl;
	break;
case'/':
	if (b==0)
	cout<<"division by zero!"<<endl;
else
	cout<<a/b<<endl;
	break;
default:
	cout<<"invalid operator!"<<endl;
	break;
	}
	getch();
	break;
	}
case 3:
	{
	int a,b,choice;
	cout<<"Enter Number one :"<<endl;
	cin>>a;
	cout<<"Enter number two :"<<endl;
	cin>>b;
	cout<<"Enter 1 for addition"<<endl;
	cout<<"Enter 2 for subtraction"<<endl;
	cout<<"Enter 3 for multiplication"<<endl;
	cout<<"Enter 4 for division."<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1: cout<<a<<" + "<<b<<" = "<<a+b;
	break;
	case 2: cout<<a<<" - "<<b<<" = "<<a-b;
	break;
	case 3: cout<<a<<" * "<<b<<" = "<<a*b;
	break;
	case 4: cout<<a<<" / "<<b<<" = "<<a/b;
	break;
	default:
	cout<<"Invalid choice";
	}
	} 
	getch();
	break;
case 4:
	return;
	getch();
	}
    }
	}
void submenu5(){system("c;s");
	int n5;
	while(1){
	system("cls");
	cout<<"             MEGA PROGRAMS            "<<endl;
	cout<<"press 1 for conversion of 4-dgit number into words"<<endl;
	cout<<"press 2 for Network packages finder"<<endl;
	cout<<"press 3 to go back"<<endl;
	cin>>n5;
switch(n5){
case 1:
	{
	system("cls");
	int num,num1,num1i,num2,num3,num3i,num4;
	while(1){system("cls");
	cout<<"Enter any 4 digit number : ";
	cin>>num;
	if (num>999 && num<=9999){
	num4=num/1000;
switch(num4){
	case 1 : cout<<"One Thousand ";
	break;
	case 2 : cout<<"Two Thousand ";
	break;
	case 3 : cout<<"Three Thousand ";
	break;
	case 4 : cout<<"Four Thousand ";
	break;
	case 5 : cout<<"Five Thousand ";
	break;
	case 6 : cout<<"Six Thousand ";
	break;
	case 7 : cout<<"Seven Thousand ";
	break;
	case 8 : cout<<"Eight Thousand ";
	break;
	case 9 : cout<<"Nine Thousand ";
	break; 
	}
	num=num%1000;
	}
	
if(num>99&&num<=999){

	num3=num/100;
switch(num3){
	case 1 : cout<<"One Hundred ";
	break;
	case 2 : cout<<"Two Hundred ";
	break;	
	case 3 : cout<<"Three Hundred ";
	break;
	case 4 : cout<<"Four Hundred ";
	break;
	case 5 : cout<<"Five Hundred ";
	break;
	case 6 : cout<<"Six Hundred ";
	break;
	case 7 : cout<<"Seven Hundred ";
	break;
	case 8 : cout<<"Eight Hundred ";
	break;
	case 9 : cout<<"Nine Hundred ";
	break;
	}
	num=num%100;
	}	
if(num>=1 && num<=20){
	num2=num;
switch(num2){
	case 1 : cout<<"One";
	break;
	case 2 : cout<<"Two";
	break;
	case 3 : cout<<"Three";
	break;
	case 4 : cout<<"Four";
	break;
	case 5 : cout<<"Five";
	break;
	case 6 : cout<<"Six";
	break;
	case 7 : cout<<"Seven";
	break;
	case 8 : cout<<"Eight";
	break;
	case 9 : cout<<"Nine";
	break;
	case 10 : cout<<"Ten";
	break;
	case 11 : cout<<"Eleven";
	break;
	case 12 : cout<<"Twelve";
	break;
	case 13 : cout<<"Thirteen";
	break;
	case 14 : cout<<"Fourteen";
	break;
	case 15 : cout<<"Fifteen";
	break;
	case 16 : cout<<"Sixteen";
	break;
	case 17 : cout<<"Seventeen";
	break;
	case 18 : cout<<"Eighteen";
	break;
	case 19 : cout<<"Nineteen";
	break;
	case 20 : cout<<"Twenty";
	break;
	}
	}
	else
if(num>20 && num<100){
	num1=num/10;
switch(num1)
	{
	case 2 : cout<<"Twenty ";
	break; 		
	case 3 : cout<<"Thirty ";
	break;	
	case 4 : cout<<"Fourty ";
	break;	
	case 5 : cout<<"Fifty ";
	break;		
	case 6 : cout<<"Sixty ";
	break;		
	case 7 : cout<<"Seventy ";
	break;		
	case 8 : cout<<"Eighty ";
	break;			
	case 9 : cout<<"Ninty ";
	break;		
	}
	num1i=num%10;
switch(num1i)
	{
	case 1 : cout<<"One ";	
	break;
	case 2 : cout<<"Two ";
	break;
	case 3 : cout<<"Three ";
	break;
	case 4 : cout<<"Four ";
	break; 
	case 5 : cout<<"Five ";
	break;
	case 6 : cout<<"Six ";
	break;
	case 7 : cout<<"Seven ";
	break;
	case 8 : cout<<"Eight ";
	break;
	case 9 : cout<<"Nine ";
	break;	
	}
	}
	getchar();
	getchar();
	system ("CLS");
	}
	}
	return;
	getch();
	break;
case 2:
	{int num,num2;
	while(1){
		system ("CLS");
		cout<<"Press 111 for Internet Packages"<<endl;
		cout<<"Press 222 for Call Packages"<<endl;
		cout<<"Press 333 for SMS Packages"<<endl;
		cin>>num;
		switch (num){
			case 111:
				mobileservice1();											//call
	    		break;
			case 222:
				mobileservice2();											//call
				break;	
			case 4:
				system("cls");
				cout<<"Thank you for using application";
				getch();
				return;				
		}
	}
	return;
	getch();	
	break;	
}
}
}
}

void mobileservice1()																//definition
{	int num2;
	while(1){
		system("cls");
		cout<<"Internet Packages are the Following"<<endl;
		cout<<"Press 1 for 500 MB for 24 Hours"<<endl;
		cout<<"Press 2 for 1500 MB for 24 Hours"<<endl;
		cout<<"Press 3 for 2000 MB for a Week"<<endl;
		cout<<"Press 4 to go Back"<<endl;
		cin>>num2;
		switch(num2){
			case 1:cout<<"Sucessfully Subscribed";
				break;
			case 2:cout<<"Sucessfully Subscribed";
				break;
			case 3:cout<<"Sucessfully Subscribed";
				break;
			case 4:
				return;
		}
		getch();
	}
}
void mobileservice2()													//definition
{ 	int num2;
	while(1)
	{
		system("cls");
		cout<<"Call Packages are the following"<<endl;
		cout<<"Press 1 for 90 mins for 24 Hours"<<endl;
		cout<<"Press 2 for 120 mins for 24 Hours"<<endl;
		cout<<"Press 3 To go Back"<<endl;
		cin>>num2;
		switch(num2){
		   	case 1:
				cout<<"Successfully Subscribed";
		 		break;
		 	case 2:
			 	cout<<"Successfully Subscribed";
		 	case 3:
		 		return;
		}
	getch();
	}	
}
void submenu6()//============================================================================================================================================
	{
	system("cls");
	int n6;
	while(1){
	system("cls");
	cout<<"             cout and cin practise           "<<endl;
	cout<<""<<endl;
	cout<<"Press 1 to add two numbers "<<endl;
	cout<<"Press 2 to find area of circle "<<endl;
	cout<<"Press 3 to find average of your marks "<<endl;
	cout<<"Press 4 to find percentage of your marks "<<endl;
	cout<<"Press 5 to swap two numbers "<<endl;
	cout<<"press 6 to go back"<<endl;
	cin>>n6;
switch(n6){
case 1:
	{
	int a,b, sum;
	cout<<"Enter number 'a' "<<endl;
	cin>>a;
	cout<<"Enter number 'b' "<<endl;
	cin>>b;
	sum=a+b;
	cout<<"Sum of "<<a<<"and"<<b<<" is = "<<sum<<endl;	
	getch();
	}
	break;
case 2:
	{
	int r;
	float area;
	cout<<"Enter radius : "<<endl;
	cin>>r;
	area=3.14*r*r;
	cout<<"Area of a circle is = "<<area;
	getch();
	}
	break;
case 3:
	{
	int a,b,c,d,e;
	float avg;
	cout<<"Enter marks of PF :"<<endl;
	cin>>a;
	cout<<"Enter marks of ITC :"<<endl;
	cin>>b;
	cout<<"Enter marks of Calculus :"<<endl;
	cin>>c;
	cout<<"Enter marks of BE :"<<endl;
	cin>>d;
	cout<<"Enter marks of EC :"<<endl;
	cin>>e;
	avg=float(a+b+c+d+e)/5;
	cout<<"Average of marks = "<<avg;
	getch();
	}
	break;
case 4:
	{
	float total,obtained;
	int prc;
	cout<<"Enter your total marks :"<<endl;
	cin>>total;
	cout<<"Enter your obtained marks :"<<endl;
	cin>>obtained;
	prc=(obtained/total)*100;
	cout<<"Percentage of your marks is = "<<prc<<"%"<<endl;	
	getch();
	}
	break;
case 5:
	{  
	int a,b;
	cout<<"enter first numbers: ";
	cin>>a;
	cout<<"enter second numbers: ";
	cin>>b;
	cout<<" before swapping x: "<<a<<"   y:"<<b<<endl;
	a=a+b;   //11
	b=a-b;//11-6 =5
	a=a-b;//
	cout<<" after swapping x:  "<<a<<"   y:"<<b;
	}
	getch();
	break; 
case 6:
	return;
	}
	getch();
	}
    }
void submenu7()
	{	system ("CLS");
	int n7;
	while(1){
	system("cls");
	cout<<"            FUNCTIONS PROGRAMS MENU              "<<endl;
	cout<<"Press 1 to check wheter number is prime or not "<<endl;
	cout<<"Press 2 to perform multiplication on a number "<<endl;
	cout<<"Press 3 to find maximum "<<endl;
	cout<<"Press 4 to find HCF of two numbers "<<endl;
	cout<<"Press 5 to find nature of a number "<<endl;
	cout<<"Press 6 to go back "<<endl;
	cin>>n7;
	switch(n7){
	case 1:			   	
	{
	int n;
	cout<<"enter a no: ";
	cin>>n;
	if(isprime(n))               //call
	cout<<"not prime";
	else
	cout<<"prime";
	}
	getch();
	break;
case 2:
	{
	int x,y;
	cout<<"enter number of ur choice=";cin>>x;
	cout<<"enter number of ur choice=";cin>>y;
	multiply(x,y);													//call
	}	
	getch();
	break;
case 3:
	{
	int a,b;
	cout<<"enter two no to find maximum: ";
	cin>>a>>b;
	int c = maximum(a,b);														//call
	cout<<"max value is: "<<c;
	}
	getch();
	break;
case 4:
	{
	int a,b,c;
    cout<<"enter any two numbers: ";
	cin>>a>>b;
	c=HCF(a,b);                     //call
    cout<<" HCF= "<<c;
	}
	getch();
	break;
case 5:
	{
	int a;
	cout<<"Enter a no to find its nature= ";
	cin>>a;
	ispositive(a);          //call
	}
	getch();
	break;
case 6:
	return;
	}		   
	getch();
	}
	}
	
	
	
	bool isprime(int n)                     //definition
	{
	int flag=1;
	for(int i=2;i<n;i++)
	return false;
    if (flag==1)
	return true;
	}
	void multiply(int a,int b)										//definition
	{
	int c;
	c=a*b;
	cout<<"multiplication="<<c<<endl;
	}
	int maximum(int x,int y)															//definition
	{
	if (x>y)
	return x;
	else 
	return y;
	}
	int HCF(int n,int d)                 //definition
	{
	int rem;
	do
	{
	rem=n%d;
	n=d;
	d=rem;
	}
	while(rem!=0);
	return n;
	}
	int ispositive(int x)           //definition
	{
	if(x>=0)
	cout<<"no is positive";
	else
	cout<<"no is negative";
	}

