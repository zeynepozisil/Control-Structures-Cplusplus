#include <iostream> 
using namespace std;

int main()
{
	int option;
	cout<<"Welcome to my first C++ program!"<<endl;
	cout<<"Please select a task to perform (-1 to exit):"<<endl;
	cout<<"1) Draw a pyramid"<<endl<<"2) Draw a star"<<endl<<"3) Compute the Fibonacci numbers"<<endl;
	cin>>option;
	while(1){
	if(option==-1){
		break;
	}		
	else if(option==1){
		int height;
		cout<<"Please enter the height of the pyramid (between 1 and 40):"<<endl;
		cin>>height;
		while(1){
			if(height>=1 && height<=40){
				int row = 0;
				while (row < height) 
				{ 
					int count = 0;
					while (count < height - row) 
					{
					cout << " ";
					count++;
					}
					count = 0;
					while (count < 2*row + 1)
					{
					cout << "*";
					count++;
					}
					cout <<'\n';
					row++;
				}
				break;
			}
			else{
				cout<<"You have entered an invalid value for height."<<endl;
				cout<<"Please enter the height of the pyramid (between 1 and 40):"<<endl;
				cin>>height;
			}
		}
	}	
	else if(option==2){
		int size;
		cout<<"Please enter the size of the star (between 1 and 20):"<<endl;
		cin>>size;
		while(1){
			if(size>=1 && size<=20){
				int row=0;
				while(row<2*size+1)
				{
					int column=0;
					while(column<2*size+1)
					{
						if(row==column || row+column==(2*size+1) - 1){ 
							cout << "*";	
						}
						else{
							cout << " ";	
						}
					column++;
					}
					cout << "\n";
				row++;
				}
				break;
			}
			else{
				cout<<"You have entered an invalid value for size."<<endl;
				cout<<"Please enter the size of the star (between 1 and 20):"<<endl;
				cin>>size;
			}
		}
	}
	else if(option==3){
		int n1=0, n2=1;
	    int sum=0;
	    int index,count=0;
		cout<<"Please enter the index of the Fibonacci number to be computed:"<<endl;
		cin>>index; 
		//largest index for fibonacci number: 48 
		//F(48)=512559680
		while(1){
			if(index>=0){
			    while (count<(index-1)){
			        sum=n1+n2;
			        n1=n2;
			        n2=sum;
			        count+=1;
			    }
			 	cout<<"F("<<index<<")="<<sum<<endl;
				break;
			}
			else{
				cout<<"You have entered an invalid value for index."<<endl;
				cout<<"Please enter the index of the Fibonacci number to be computed:"<<endl;
				cin>>index;
			}
		}
	}
	else
		cout<<"You have entered an invalid value for selection."<<endl;	
		cout<<"Please select a task to perform (-1 to exit):"<<endl;
		cout<<"1) Draw a pyramid"<<endl<<"2) Draw a star"<<endl<<"3) Compute the Fibonacci numbers"<<endl;
		cin>>option;
	}		
}
