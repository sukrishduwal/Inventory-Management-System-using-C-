#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
class market
{  
      string email,password;
      string pname;
    int prdcode;
    int price;
    int quantity;
    float discount;
    public:
    void screen();
    void administrator();
    void login();
    void menu();
    void add();
    void update();
    void remv();
    void buyer();
    void feedback();
	void viewFeedback();
    void receipt();
	void list();
};
    void market::screen()
    {
       
        int c;
        char ch;
       
        do{
        system("cls");
    cout<<"\t \t \t     "<<" _________________________________________"<<"\n";
    cout<<"\t \t \t     "<<"|                                         |\n";
    cout<<"\t \t \t     "<<"|                                         |\n";
    cout<<"\t \t \t     "<<"|       Welcome to CASHFLOW supermarket   |\n";
    cout<<"\t \t \t     "<<"|                                         |\n";
    cout<<"\t \t \t     "<<"|_________________________________________|"<<"\n";
    cout<<"\n\n";
    cout<<"\t \t \t \t"<<" _________________________________"<<"\n";
    cout<<"\t \t \t \t"<<"|           Option                |\n";
    cout<<"\t \t \t \t"<<"|                                 |\n";
    cout<<"\t \t \t \t"<<"|1.     Administrator             |\n";
    cout<<"\t \t \t \t"<<"|                                 |\n";
    cout<<"\t \t \t \t"<<"|                                 |\n";
    cout<<"\t \t \t \t"<<"|2.     Buyer                     |\n";
    cout<<"\t \t \t \t"<<"|                                 |\n";
    cout<<"\t \t \t \t"<<"|                                 |\n";
    cout<<"\t \t \t \t"<<"|3.     Feedback and rating       |\n";
    cout<<"\t \t \t \t"<<"|                                 |\n";
    cout<<"\t \t \t \t"<<"|                                 |\n";
    cout<<"\t \t \t \t"<<"|4.     Exit                      |\n";
    cout<<"\t \t \t \t"<<"|                                 |\n";
    cout<<"\t \t \t \t"<<"|_________________________________|"<<"\n\n\n\n";
    cout<<"\t Please Select From above:  ";
    cin>>c;
    
    switch(c)
    {
        case 1:
        {
            administrator();
            break;
        }
        case 2:
        {
            buyer();
            break;
        }
        case 3:
        {
            feedback();
            break;
        }
        case 4:
        {
            cout<<"You choosed exit";
            break;
        }
        default:
        {
            cout<<"Enter valid choose";
            break;
        }
        

    }
    cout<<"\n\nContinue Shopping??";
    cout<<"\n If Yes Enter Y and If No Enter N";
    cin>>ch;
     }
    
    while(ch!='n'&&ch!='N');
    //goto m;
    
    }
void market::administrator()
{
     cout<<"\t \t \t \t"<<" _________________________________"<<"\n";
     cout<<"\t \t \t \t"<<"|                                 |\n";
     cout<<"\t \t \t \t"<<"|             Login               |\n";
     cout<<"\t \t \t \t"<<"|_________________________________|"<<"\n\n\n\n";
 cout<<"\t "<<"Enter Email:";
 cin>>email;
 cout<<"\n\t "<<"Enter Password:";
 cin>>password;
 login();
}
void market::login()
{
    if(email=="admin123@gmail.com"&&password=="admin123")
    {
        menu();
    }
    else
    {
        system("cls"); 
        cout<<"\t \t \t \t"<<"   Invalid Email or Password\n\n";
        administrator();
    }
}
void market::menu()
{
  system("cls");  
  int d;
  char ch;
  cout<<"\n\n \t \t \t \t"<<"Congratulations you successfully login\n\n";
  do
  {
    cout<<"\n \n \t \t \t \t______________ADMIN________________\n\n";
    cout<<"\t \t \t \t"<<" _________________________________"<<"\n";
    cout<<"\t \t \t \t"<<"|           Option                |\n";
    cout<<"\t \t \t \t"<<"|                                 |\n";
    cout<<"\t \t \t \t"<<"|1.     Add Item                  |\n";
    cout<<"\t \t \t \t"<<"|                                 |\n";
    cout<<"\t \t \t \t"<<"|                                 |\n";
    cout<<"\t \t \t \t"<<"|2.     Update Item               |\n";
    cout<<"\t \t \t \t"<<"|                                 |\n";
    cout<<"\t \t \t \t"<<"|                                 |\n";
    cout<<"\t \t \t \t"<<"|3.     Remove  Item              |\n";
    cout<<"\t \t \t \t"<<"|                                 |\n";
    cout<<"\t \t \t \t"<<"|                                 |\n";
	cout<<"\t \t \t \t"<<"|4.     View Feedback & Rating    |\n";
	cout<<"\t \t \t \t"<<"|                                 |\n";
	cout<<"\t \t \t \t"<<"|                                 |\n";
    cout<<"\t \t \t \t"<<"|5.     Back to Main Screen       |\n";
    cout<<"\t \t \t \t"<<"|                                 |\n";
    cout<<"\t \t \t \t"<<"|_________________________________|"<<"\n\n\n\n";
    cout<<"\t Please Select From above:  ";
    cin>>d;
    switch(d)
    {
        case 1:
        {
            add();
            break;
        }
        case 2:
        {
            update();
            break;
        }
        case 3:
        {
            remv();
            break;
        }
        case 4:
        {
            viewFeedback();
            break;
        }
		case 5:
		{
			screen();
			break;
		}
        default:
        {
            cout<<"Enter valid choice";
        }
    }
    cout<<"\n\nContinue as Admin??";
    cout<<"\n If Yes Enter Y and If No Enter N";
    cin>>ch;
    system("cls");  
     }
    while(ch!='n'&&ch!='N');

}
void market::add()
{
    system("cls");
    t:
    fstream product;
    string n;
    int c;
    int p;
    int q;
    float d;
    int token=0;
    cout<<"\t \t \t \t"<<" _________________________________"<<"\n";
    cout<<"\t \t \t \t"<<"|                                 |\n";
    cout<<"\t \t \t \t"<<"|          Add Item               |\n";
    cout<<"\t \t \t \t"<<"|_________________________________|"<<"\n\n\n\n";
    cout<<"\t \t "<<"Enter product name:";
    cin>>pname;
    cout<<"\t \t "<<"Enter Product Code:";
    cin>>prdcode;
    cout<<"\t \t "<<"Enter Price:";
    cin>>price;
    cout<<"\t \t "<<"Enter Discount%:";
    cin>>discount;
     cout<<"\t \t "<<"Enter Qunantity:";
    cin>>quantity;
    product.open("details.txt",ios::in);
    {
         if(!product)
         {
            product.open("details.txt",ios::app|ios::out);
            product<<pname<<" "<<prdcode<<" "<<price<<" "<<discount<<" "<<quantity<<"\n";
            product.close();          
         }
         	else
	{
		product>>n>>c>>p>>d>>q;
		
		while(product>>n>>c>>p>>d>>q)
		{
			if(c ==prdcode)
			{
				token++;
				break;
			}	
		}
		product.close();
	if(token==1)
	goto t;
	else{
		product.open("details.txt", ios::app|ios::out);
		product<<pname<<" "<<prdcode<<" "<<price<<" "<<discount<<" "<<quantity<<"\n";
		product.close();
		
	}
}
	cout<<"\n\n\t\t Record inserted !";
}   
}
void market::update()
{
    fstream product,product1;
	int pkey;
	int token=0;
	int c;
	float p;
    int q;
	float d;
	string n;
	
	cout<<"\n\t\t\t Modify the record";
	cout<<"\n\t\t\t Product code :";
	cin>>pkey;
	
	product.open("details.txt",ios::in);
	if(!product)
	{
		cout<<"\n\nFile doesn't exist! ";
	}
	else{
		
		product1.open("details1.txt", ios::app|ios::out);
		
		product>>pname>>prdcode>>price>>discount>>quantity;
		while(!product.eof())
		{
			if(pkey==prdcode)
			{
				cout<<"\n\t\t Name of the product :";
				cin>>n;
				cout<<"\n\t\t Product new code :";
				cin>>c;
				cout<<"\n\t\t Price :";
				cin>>p;
				cout<<"\n\t\t Discount Percent :";
				cin>>d;
                cout<<"\t \t "<<"Enter Qunantity:";
                cin>>q;
				product1<<" "<<n<<" "<<c<<" "<<p<<" "<<d<<" "<<q<<"\n";
				cout<<"\n\n\t\t Record edited ";
				token++;
			}
			else
			{
				product1<<pname<<" "<<prdcode<<" "<<price<<" "<<discount<<" "<<quantity<<"\n";
				
			}
			product>>pname>>prdcode>>price>>discount>>quantity;
		}
		product.close();
		product1.close();
		remove("details.txt");
		rename("details1.txt","details.txt");
		
		if(token==0)
		{
			cout<<"\n\n Record not found sorry!";
		}
	}
	
}
void market::remv()
{

	
	fstream product,product1;
	int pkey;
	int token=0;
	cout<<"\n\n\t Delete product";
	cout<<"\n\n\tEnter Product code :";
	cin>>pkey;
	product.open("details.txt", ios::in);
	if(!product)
	{
		cout<<"File doesnt exist";
		
	}	
	else{
		product1.open("details1.txt",ios::app|ios::out);
		product>>pname>>prdcode>>price>>discount>>quantity;
		while(!product.eof())
		{
			if(prdcode==pkey)
			{
				cout<<"\n\n\t Product deleted succesfully";
				token++;
			}
			else
			{
				product1<<pname<<" "<<prdcode<<" "<<price<<" "<<discount<<" "<<quantity<<"\n";
				
			}
			product>>pname>>prdcode>>price>>discount>>quantity;
		}
		product.close();
		product1.close();
		remove("details.txt");
		rename("details1.txt","details.txt");
    }	
		if(token==0)
		{
			cout<<"\n\n Product not found";
		}
	
}
void market::buyer()
{

	int choice;
	cout<<"\t\t\t  Buyer \n";
	cout<<"\t\t\t_____________  \n";
	cout<<"                     \n";
	cout<<"\t\t\t1) Buy product \n";
	cout<<"                     \n";
	cout<<"\t\t\t2) Go back     \n";
	cout<<"\t\t\t Enter your choice : ";
	
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			receipt();
			break;
		case 2:
			screen();
            break;
		default :
			
			cout<<"invalid choice";
			
	}
	
	
}
void market::receipt()
{
        system("cls");
		fstream product;
		
		int arrc[100],arrq[100];
		char choice;
		int c=0;
		float amount=0;
		//float dis=0;
		float total=0;
	
		cout<<"\n\n\t\t\t **Product List** ";
		product.open("details.txt",ios::in);
		if(!product)
		{
			cout<<"\n\n Empty Details";
            return;
		}
		else
		{
			product.close();                                   
			list();
			cout<<"\n\n\n ____________________________";
			cout<<"\n|                            |";
			cout<<"\n|    Please place the order  |";
			cout<<"\n|____________________________|\n";
			do
			{
				m:
				cout<<"\n\nPlease select the required products from the list:-\n";
				cout<<"\n\n Product Code : ";
				cin>>arrc[c];
				cout<<"\n Product Quantity : ";
				cin>>arrq[c];

				 bool productFound = false;
                 bool stockAvailable = false;
                 product.open("details.txt", ios::in);
                 while (product >> pname >> prdcode >> price >> discount >> quantity)
                {
                    if (arrc[c] == prdcode) 
                    {
                        productFound = true;
                        if (arrq[c] <= quantity) 
                        { 
                             stockAvailable = true;
                        }
                    break; 
                }
            }
            product.close();

            if (!productFound) 
            {
                cout << "\n\nProduct with code " << arrc[c] << " not found. Please try again!";
                goto m;  
            } else if (!stockAvailable)
            {
                cout << "\n\nNot enough stock for product " << arrc[c] << ". Please try again!";
                goto m;  
            }
				c++;             
				cout<<"\n\n Want to buy another product? Press y for yes and n for no : ";
				cin>>choice;	
			}
			
			while(choice == 'y'|| choice== 'Y');
			system("cls");
			
			cout<<"\n\n\t\t\t__________RECEIPT______________\n";
			cout<<"\nProduct Name\tProduct Num \tPrice \tAmount \tAmount with discount\tQuantity\n";
			
			
			for(int i=0;i<c;i++) 
			{
				product.open("details.txt",ios::in);
				
				while(product>>pname>>prdcode>>price>>discount>>quantity)
				{
					if(prdcode==arrc[i])   
					{
						amount=price*arrq[i];
						discount=amount-(amount*discount/100);
						total =total+ discount;
						cout<<"\n"<<pname<<"\t\t"<<prdcode<<"\t\t"<<price<<"\t"<<amount<<"\t\t"<<discount<<"\t\t"<<arrq[i];	
                        break;
					}
				}
				product.close();
			}
			cout<<"\n\n----------------------------------------";
			cout<<"\n Total Amount : "<<total;

            product.open("details.txt", ios::in);
            fstream tempProduct;
            tempProduct.open("details_temp.txt", ios::out);  
            while (product>>pname>>prdcode>>price>>discount>>quantity) 
            {
            bool productSold = false;

            
            for (int i=0;i<c;i++) 
            {
                if (prdcode==arrc[i]) 
                {
                    quantity=quantity-arrq[i];  
                    productSold=true;
                    break;
                }
            }

            
            tempProduct<<pname<<" "<<prdcode<< " "<<price<<" "<<discount<< " "<<quantity<<"\n";
        }

        product.close();
        tempProduct.close();

        
        remove("details.txt");
        rename("details_temp.txt", "details.txt");

        cout<<"\n\nInventory updated successfully!";
    }
            
		
}
void market::list()
{
    system("cls");
    cout << "\t\t\t **Product List** ";
	fstream product;
	product.open("details.txt",ios::in);
	if (!product)
    {
        cout << "\n\n Empty Details!";
        return;
    }
     else 
    {
    cout<<"\n\n|_______________________________________________________________________\n";
	cout<<"Name\t\tProNo\t\tPrice\t\tDiscount\tQuantity";
	cout<<"\n\n|_______________________________________________________________________\n";
    product>>pname>>prdcode>>price>>discount>>quantity;
	while(!product.eof())
	{
		cout<<pname<<"\t\t"<<prdcode<<"\t\t"<<price<<"\t\t"<<discount<<"\t\t"<<quantity<<"\n";
		product>>pname>>prdcode>>price>>discount>>quantity;
		
	}
	product.close();
    }
}
void market::feedback()
{
	string name, feedback;
	int rating;
	
	cout << "\n\n\t\t\tProvide Feedback and Rating";
	cout << "\n\n\tEnter your name: ";
	cin.ignore();
	getline(cin, name);
	cout << "\n\tEnter your feedback: ";
	getline(cin, feedback);
	cout << "\n\tEnter your rating (1-5): ";
	cin >> rating;
	
	fstream product
	;
	product
	.open("feedback.txt", ios::app | ios::out);
	product
	 << name << "\n" << feedback << "\n" << rating << "\n";
	product
	.close();
	cout << "\n\n\tThank you for your feedback and rating!";
}

void market::viewFeedback()
{
    cout<<"\t\t\t\t ______________________________________\n";
    cout<<"\t\t\t\t|                                      |\n";
	cout<<"\t\t\t\t|   View customer feedback and rating  |\n";
    cout<<"\t\t\t\t|______________________________________|\n\n";
	
	fstream product
	;
	product
	.open("feedback.txt", ios::in);
	if (!product
	)
	{
		cout << "\n\n\tNo feedback available";
	}
	else
	{
		string name, feedback;
		int rating;
		
		while (getline(product, name))
		{
			getline(product, feedback);
			product>> rating;
			product.ignore(); 
			
			cout << "\n\nName: " << name << "\n";
			cout << "Feedback: " << feedback << "\n";
			cout << "Rating: " << rating << "\n";
		}
		
		product.close();
	}
}
int main()
{
    market m;
    m.screen();
    return 0;
}