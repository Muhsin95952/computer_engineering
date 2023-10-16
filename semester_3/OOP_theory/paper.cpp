#include <iostream>
using namespace std;

int main(){
	int count[5]={0,0,0,0,0};
	int ticket, discard= 0;
	char enter;
	cout<<"select event\n";
	do{
		cout<<"Enter ticket no. ";
		cin>>ticket;
		switch(ticket){
			case 1:
				count[0]++;
				break;
			case 2:
				count[1]++;
				break;
			case 3:
				count[2]++;
				break;
			case 4:
				count[3]++;
				break;
			case 5:
				count[4]++;
				break;
			default:
				discard++;					
		}
		cout<<"Enter ticket again(yes/no)  ";
		cin>>enter;
	}
	while(enter == 'y');
		for(int i = 0; i<6; i++){
			if(i==5){
			cout<<"discarded"<<discard<<endl;
			break;
		}
			cout<<"students in event no  "<<i+1<<" are "<<count[i]<<endl;	
		}
return 0;	
}
