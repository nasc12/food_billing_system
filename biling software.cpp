#include<iostream>
#include<string.h>
using namespace std;
struct biling{
	string name_of_food;
	int price;
	int no_of_items;
	double total_price;
	struct biling *link;
};
biling *head=NULL;
void menu()
{
	cout<<"           FOOD ISLAND"<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"menu			price "<<endl;
	cout<<"--------		-------"<<endl;
	cout<<"1.chicken		100"<<endl;
	cout<<"2.paneer		70"<<endl;
	cout<<"3.rice			50"<<endl<<endl;
	
}
static double amount=0.0;
void amnt(double price,float no_of_items)
{
	amount =amount + price * no_of_items;
}

void choice()
{
	int n;
	start:
	cout<<"enter your choice : ";
	cin>>n;
	switch(n)
	{
		case 1:
			{
				struct biling *temp=new biling;
				cout<<"Enter food name : ";
				string s;
				cin>>s;
				temp->name_of_food=s;
				int n1;
				cout<<"Enter number of items : ";
				cin>>n1;
				temp->no_of_items=n1;
				cout<<"Enter the price : ";
				int p;
				cin>>p;
				temp->price=p;
				temp->link=NULL;
				temp->total_price=temp->price*temp->no_of_items;
				amnt(p,n1);
				if(head==NULL)
				head=temp;
				else
				{
					biling *ptr=head;
					while(ptr->link!=NULL)
					{
						ptr=ptr->link;
					}
					ptr->link=temp;
				}
				cout<<"\ndo you want to add another order sir press y for yes and n for no : ";
				char m;
				cin>>m;
				if(m==121)
				goto start;
				else
				break;
			}
		case 2:
			{
				struct biling *temp=new biling;
				cout<<"Enter food name : ";
				string s;
				cin>>s;
				temp->name_of_food=s;
				int n1;
				cout<<"Enter number of items : ";
				cin>>n1;
				temp->no_of_items=n1;
				cout<<"Enter the price : ";
				int p;
				cin>>p;
				temp->price=p;
				temp->link=NULL;
				temp->total_price=temp->price*temp->no_of_items;
				amnt(p,n1);
				if(head==NULL)
				head=temp;
				else
				{
					biling *ptr=head;
					while(ptr->link!=NULL)
					{
						ptr=ptr->link;
					}
					ptr->link=temp;
				}
				cout<<"\ndo you want to add another order sir press y for yes and n for no : ";
				char m;
				cin>>m;
				if(m==121)
				goto start;
				else
				break;
			}
			case 3:
			{
				struct biling *temp=new biling;
				cout<<"Enter food name : ";
				string s;
				cin>>s;
				temp->name_of_food=s;
				int n1;
				cout<<"Enter number of items : ";
				cin>>n1;
				temp->no_of_items=n1;
				cout<<"Enter the price : ";
				int p;
				cin>>p;
				temp->price=p;
				temp->link=NULL;
				temp->total_price=temp->price*temp->no_of_items;
				amnt(p,n1);
				if(head==NULL)
				head=temp;
				else
				{
					biling *ptr=head;
					while(ptr->link!=NULL)
					{
						ptr=ptr->link;
					}
					ptr->link=temp;
				}
				cout<<"\ndo you want to add another order sir press y for yes and n for no : ";
				char m;
				cin>>m;
				if(m==121||m=='Y')
				goto start;
				else
				break;
			}
	}
}
void print()
{
	biling *ptr=head;
	cout<<"\n----------------------------------------BILL---------------------------------------------------------------\n \n";
	cout<<"s.no.	 name of food 		number of items 		price/plate 			total_price";
	cout<<"\n------------------------------------------------------------------------------------------------------------\n\n";
	while(ptr!=NULL)
	{
		static int i=1;
		cout<<endl;
		cout<<i<<"			"<<ptr->name_of_food<<"			"<<ptr->no_of_items<<"			"<<ptr->price
			<<"			"<<ptr->total_price;
		cout<<endl;
		ptr=ptr->link;
		i++;
	}
	int gst=3;
	cout<<"\n amount : "<<amount;
	cout<<"\n GST amount =3% : "<<(gst*amount)/100;
	cout<<"\nTotal Amount = "<<amount+(gst*amount)/100;
}
int main()
{
	menu();
	choice();
	print();
	return 0;
}
