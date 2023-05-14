#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int fact (int);
int quad1(int,int,int);
void isprime(int n);
int quad2(int,int,int);
int HCF(int,int);
int Larger(int,int);
int temp(int,int);
int main()
{
	int choice,choiceOne,choiceTwo,choiceThree;
	int choiceFour,choiceFive,choiceSix,choiceSeven;
	cout<<"Please select your choice for practice."<<endl<<endl;
	cout<<"1. cin and cout practice"<<endl;
	cout<<"2. if-else practice"<<endl;
	cout<<"3. Switch practice"<<endl;
	cout<<"4. For loop practice"<<endl;
	cout<<"5. while loop/do while loop practice"<<endl;
	cout<<"6. Functions practice"<<endl;
	cout<<"7. Mega programs practice"<<endl<<endl;
	cout<<"Enter your choice : "<<endl;
	cin>>choice;
	system("cls");
	switch(choice)
	{
		
		case 1: cout<<"1. Two numbers addition"<<endl;
		cout<<"2. Find area of circle"<<endl;
		cout<<"3. Find average of your marks"<<endl;
		cout<<"4. Find percentage of your marks."<<endl<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>choiceOne;
		system("cls");
		if(choiceOne==1)
		{
		
			int a,b, sum;
			cout<<"Enter number 'a' "<<endl;
			cin>>a;
			cout<<"Enter number 'b' "<<endl;
			cin>>b;
			sum=a+b;
			cout<<"Sum of "<<a<<"and"<<b<<" is = "<<sum<<endl;
		
		}
		else if(choiceOne==2)
		{
			int r;
			float area;
			cout<<"Enter radius : "<<endl;
			cin>>r;
			area=3.14*r*r;
			cout<<"Area of a circle is = "<<area;
		}
		else if(choiceOne==3)
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
		}
		else if(choiceOne==4)
		{
		float total,obtained;
		int prc;
		cout<<"Enter your total marks :"<<endl;
		cin>>total;
		cout<<"Enter your obtained marks :"<<endl;
		cin>>obtained;
		prc=(obtained/total)*100;
		cout<<"Percentage of your marks is = "<<prc<<"%"<<endl;	
		}
		else
		cout<<"Invalid choice.";
		break;
		case 2: cout<<"In if-else practice, select your choice."<<endl<<endl;
		cout<<"1. Finding even or odd number."<<endl;
		cout<<"2. Finding positive or negative number"<<endl;
		cout<<"3. Finding vowel or consonant"<<endl;
		cout<<"4. Finding whether alphabet is in uppercase or lowercase"<<endl<<endl;
		cout<<"Enter your choice : "<<endl;
		cin>>choiceTwo;
		system("cls");
		if(choiceTwo==1)
		{
			int n;
			cout<<"Enter a number: "<<endl;
			cin>>n;
			if(n%2==0)
			cout<<"The number "<<n<<" is even.";
			else
			cout<<"The number "<<n<<" is odd.";
		}
		else if(choiceTwo==2)
		{
			int x;
			cout<<"Enter a number."<<endl;
			cin>>x;
			if(x>0)
			cout<<"Number "<<x<<" is positive.";
			else if(x<0)
			cout<<"Number "<<x<<" is negative.";
			else
			cout<<"Number is zero.";
			
		}
		else if(choiceTwo==3)
		{
			char ch;
			cout<<"Enter a character : "<<endl;
			cin>>ch;
			if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			cout<<"Character "<<ch<<" is vowel.";
			else
			cout<<"Character "<<ch<<" is consonant.";
		}
		else if(choiceTwo==4)
		{
			char c;
			cout<<"Enter a character :"<<endl;
			cin>>c;
			if(c>='a'&&c<='z')
			cout<<"The character "<<c<<" is in lowercase."<<endl;
			else if(c>='A'&&c<='Z')
			cout<<"The character "<<c<<" is in uppercase."<<endl;
		}
		else
		cout<<"invalid choice."<<endl;
		break;
		case 3: cout<<"In switch statement practice, select your choice: "<<endl<<endl;//==========================================================
		cout<<"1. Basic Calculator "<<endl;
		cout<<"2. Vowel or consonant finding."<<endl<<endl;
		cout<<"Enter your choice :"<<endl;
		cin>>choiceThree;
		if(choiceThree==1)
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
		 else if(choiceThree==2)
		 {
		 	char ch;
		 	cout<<"Enter a character :"<<endl;
		 	cin>>ch;
		 	switch(ch)
		 	{
		 		case 'a': cout<<"You entered a vowel."<<endl;
		 		break;
		 		case 'e': cout<<"You entered a vowel."<<endl;
		 		break;
		 		case 'i': cout<<"You entered a vowel."<<endl;
		 		break;
		 		case 'o': cout<<"You entered a vowel."<<endl;
		 		break;
		 		case 'u': cout<<"You entered a vowel."<<endl;
		 		break;
		 		default:
		 			cout<<"You entered consonant."<<endl;
		 		
			 }
		 }
		 else
		 cout<<"Invalid choice."<<endl;
		break;
		case 4: cout<<"In For loop practice, select your choice : "<<endl<<endl;//================================================
		cout<<"1. Top left pyramid "<<endl;
		cout<<"2. bottom left pyramid "<<endl;
		cout<<"3. triangle of stars"<<endl;
		cout<<"4. bottom right pyramid."<<endl;
		cout<<"5. Diamond pattern of stars."<<endl;
		cout<<"6. Square of stars."<<endl;
		cin>>choiceFour;
		system("cls");
		int n, i, j;
		if(choiceFour==1)
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
        else if(choiceFour==2)
        {
        	 

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
	    	else if(choiceFour==3)
	    	{
	    	int k = 2*n - 2; 
            for (int i=0; i<n; i++) 
             { 
            for (int j=0; j<k; j++) 
            cout <<" "; 
            k = k - 1; 
            for (int j=0; j<=i; j++ ) 
            { 
              cout << "* "; 
             } 
             cout << endl; 
             } 	
		   	}
		   	else if(choiceFour==4)
		   	{
		   		int k = 2*n - 2; 
             for (int i=0; i<n; i++) 
             { 
              for (int j=0; j<k; j++) 
              cout <<" "; 
               k = k - 2; 
              for (int j=0; j<=i; j++ ) 
              { 
              cout << "* "; 
              } 
              cout << endl; 
                } 
			   }
			   else if(choiceFour==5)
			   {
			   	int n, c, k, space=1;
    cout<<"Enter number of rows (for diamond dimension) : ";
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
			   else if(choiceFour==6)
			   {
			   	int n,i,j;
			   	cout<<"Enter number to print square :"<<endl;
			   	cin>>n;
			   	for(i=1;i<=n;++i)
			   	{
			   		for(j=1;j<=n;++j)
			   		{
			   			cout<<"*";
					   }
					   cout<<endl;
				   }
			   }
			   else
			   cout<<"invalid choice.";
			   break;
			   case 5: cout<<"In while and do-while loop, select your choice."<<endl<<endl;//======================================================
			   cout<<"1. Tabe of a number."<<endl;
			   cout<<"2. Factorial of a number."<<endl;
			   cout<<"3. LCM of numbers"<<endl;
			   cout<<"4. HCF of numbers."<<endl;
			   cout<<endl<<"Enter your choice. "<<endl;
			   cin>>choiceFive;
			   system("cls");
			   if(choiceFive==1)
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
			   else if(choiceFive==2)
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
			   else if(choiceFive==3)
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
			   else if(choiceFive==4)
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
			   else
			   cout<<"Invalid choice."<<endl;
			   break;
			   case 6: cout<<"In Functions practice, select your choice."<<endl<<endl;//===================================================================
			   cout<<"1. Quadratic equations root.";
			   cout<<endl<<"2. Factorial of given number."<<endl;
			   cout<<"3. HCF using function."<<endl;
			   cout<<"4. Whether number is prime or not."<<endl;
			   cout<<"5. Larger number finder."<<endl;
			   cout<<"6. Swap numbers."<<endl<<endl;
			   cout<<"Enter your choice."<<endl;
			   cin>>choiceSix;
			   system("cls");
			   if(choiceSix==1) 
			   {
			   	int a,b,c,d,e;
			   	cout<<"Enter the values of a:";
			   	cin>>a;
				cout<<"Enter the values of b:";
			   	cin>>b;
			   	cout<<"Enter the values of c:";
			   	cin>>c;
			   	d=quad1(a,b,c);
			   	cout<<"Value (with +ve): "<<d<<endl;
			   	e=quad2(a,b,c);
			   	cout<<"Value (with -ve): "<<e<<endl;
			   }
			   else if(choiceSix==2)
			   {
			   	int n,fac;
			   	cout<<"Enter a number:  ";
			   	cin>>n;
			     
			   	cout<<"factorial of number: "<<fact(n)<<endl;
			   }
			   else if(choiceSix==3)
			   {
			   	int n,d,rem,hcf;
			   	cout<<"Enter numerator : "<<endl;
			   	cin>>n;
			   	cout<<"Enter denominator : "<<endl;
			   	cin>>d;
			   	hcf=HCF(n,d);
			   	cout<<"HCF of numbers is : "<<hcf<<endl;
			   }
			   else if(choiceSix==4)
			   {
			   	int n;
				cout<<"Enter a number:";
				cin>>n;
				 isprime(n);
				
			   }
			   else if(choiceSix==5)
			   {
			   	int a,b,large;
			   	cout<<"Enter first number : "<<endl;
			   	cin>>a;
			   	cout<<"Enter second number : "<<endl;
			   	cin>>b;
			   	
			   	cout<<large<<" is larger number."<<Larger(a,b)<<endl;
			   }
			   else if(choiceSeven==6)
			   {
			   	int a,b;
			   	cout<<"Enter first number : "<<endl;
			   	cin>>a;
			   	cout<<"Enter second number : "<<endl;
			   	cin>>b;
			   	cout<<"a = "<<temp(a,b)<<endl;
			   	cout<<"b = "<<temp(a,b)<<endl;
			   }
			   else
			   cout<<"Invald choice.";
			   
		break;
		case 7: cout<<"In mega program, select your choice."<<endl<<endl;
		cout<<"1. conversion of 4-dgit number into words"<<endl;
		cout<<"2. Network packages finder."<<endl<<endl;
		cout<<"Enter your choice : "<<endl;
		cin>>choiceSeven;
		system("cls");
		if(choiceSeven==1)
		{
				int num;
	cout << "\nEnter a FOUR-digit number:\n";
	cin >> num;	
	int thousand_digit = num/1000;
	int hundreds_digit = num%1000;
	int tens_digits = hundreds_digit/100;
	int tens  = hundreds_digit %100;
	int digit  = tens/10;
	int digit_mod = tens%10;
	if ((num>=1) && (num<=9999))
		{
		switch (thousand_digit)
		{
			case 1:	cout << " one thousand ";
				break;
			case 2:cout << " two thousand ";
				break;
			case 3:	cout << " three thousand ";
				break;
			case 4:	cout << " four thousand ";
				break;
			case 5:	cout << " five thousand ";
				break;
			case 6:	cout << " six thousand ";
				break;
			case 7:	cout << " seven thousand ";
				break;
			case 8:	cout << "eight thousand ";
				break;
			case 9:	cout << "nine thousand ";
				break;
			default:	cout << "  ";
		}
		switch (tens_digits)
		{
			case 0:	cout << " ";
				break;
			case 1:	cout << "one hundred ";
				break;
			case 2:	cout << "two hundred ";
				break;
			case 3:cout << "three hundred ";
				break;
			case 4:cout << "four hundred ";
				break;
			case 5:cout << "five hundred ";
				break;
			case 6:cout << "six hundred ";
				break;
			case 7:	cout << "seven hundred ";
				break;
			case 8:cout << "eight hundred ";
				break;
			case 9:	cout << "nine hundred ";
				break;
			default:	cout<<" ";
		}
		if(tens>=1&&tens<=20)
		{
		
		switch(tens)
		{
			case 1: cout<<"one";
			break;
			case 2: cout<<"two";
			break;
			case 3: cout<<"Three";
			break;
			case 4: cout<<"Four";
			break;
			case 5: cout<<"Five";
			break;
			case 6: cout<<"six";
			break;
			case 7: cout<<"seven";
			break;
			case 8: cout<<"eight";
			break;
			case 9: cout<<"nine";
			break;
			case 10: cout<<"ten";
			break;
			case 11: cout<<"Eleven";
			break;
			case 12: cout<<"twelve";
			break;
			case 13: cout<<"thirteen";
			break;
			case 14: cout<<"fourteen";
			break;
			case 15: cout<<"fifteen";
			break;
			case 16: cout<<"sixteen";
			break;
			case 17: cout<<"seventeen";
			break;
			case 18: cout<<"eighteen";
			break;
			case 19: cout<<"nineteen";
			break;
		}
			
		}
		else
			{
				switch(digit)
				{
					case 2: cout<<"twenty";
					break;
					case 3: cout<<"thirty";
					break;
					case 4: cout<<"fourty";
					break;
					case 5: cout<<"Fifty";
					break;
					case 6: cout<<"sixty";
					break;
					case 7: cout<<"seventy";
					break;
					case 8: cout<<"eighty";
					break;
					case 9: cout<<"ninety";
					break;
					}
					switch(digit_mod)
					{
						case 1: cout<<" one";
						break;
						case 2: cout<<" two";
					break;
					case 3: cout<<" three";
					break;
					case 4: cout<<" four";
					break;
					case 5: cout<<" Five";
					break;
					case 6: cout<<" six";
					break;
					case 7: cout<<" seven";
					break;
					case 8: cout<<" eight";
					break;
					case 9: cout<<" nine";
					break;
					}
	    }
			}
		}
		else if(choiceSeven==2)
		{
		int choice;
		cout<<"1. one"<<endl;
		cout<<"2. Two"<<endl;
		cout<<"3 Three"<<endl;
		cout<<"Enter your choice : "<<endl;
		cin>>choice;
		system("cls");
		switch(choice)
		{
			case 1:
				int one;
				cout<<"1. one"<<endl;
				cout<<"2. Two"<<endl;
				cout<<"3. Three"<<endl;
				cin>>one;
					system("cls");
				if(one==1)
				cout<<"You are in one point one."<<endl;
				else if(one==2)
				cout<<"You are in one point two."<<endl;
				else if(one==3)
				cout<<"You are in one point three"<<endl;
				else
				cout<<"Invalid choice.";
				break;
				case 2:
					int two;
					cout<<"1. One"<<endl;
					cout<<"2. Two"<<endl;
					cout<<"Enter your choice : "<<endl;
				cin>>two;
					system("cls");
				if(two==1)
				cout<<"You are in two point one."<<endl;
				else if(two==2)
				cout<<"Youare in two point two."<<endl;
				else
				cout<<"Invalid choice."<<endl;
				break;
				case 3:
				system("cls");
				break;
				default:
					cout<<"Invalid choice."<<endl;
			}	
		}
		
		
		 
		
		
	}  //choice of first menu switch
	
}  //main
int fact (int n)
{
			int f;
			for(int a=1;a<=n;++a)
			f=f*a;
			return f;
}
int quad1(int a,int b,int c)
{
	int d;
	d=(-b)+sqrt(b*b-4*a*c)/(2*a);
	return d;
}
int quad2(int a,int b,int c)
{
	int e;
	e=(-b)-sqrt(b*b-4*a*c)/(2*a);
	return e;
}
void isprime(int n)
{
	for(int i=2; i<n; i++)
	{
		if(n%i==0)
		{
			cout<<"Not Prime numbber:"<<endl;
		}
		
	}
	
}
int HCF(int n,int d)   //call
{
	int rem;
	do{
		rem=n%d;
		n=d;
		d=rem;
	}
	while(rem!=0);
}
int Larger(int a, int b)
{
	int large;
	if(a>b)
	return a;
	else
	return b;
}
int temp(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	return a;
	return b;
	
}
