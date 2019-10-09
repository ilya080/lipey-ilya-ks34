#include <iostream>
#include "play.cpp"
using namespace std;
void reference(int c1,int c2,int c3,int temp, int& viigr){
	if (temp==c1){
		viigr=1000;
	}
	if(temp==c2){
		if (viigr!=0)
			viigr=viigr*10;
		if(viigr==0)
			viigr=1000;
	}
	if(temp==c3){
		if (viigr!=0)
			viigr=viigr*10;
		if(viigr==0)
			viigr=1000;
	}
}
/*void reference_const(int c1,int c2,int c3,int temp, int const &viigr){
	if (temp==c1){
		viigr=1000;
	}
	if(temp==c2){
		if (viigr!=0)
			viigr=viigr*10;
		if(viigr==0)
			viigr=1000;
	}
	if(temp==c3){
		if (viigr!=0)
			viigr=viigr*10;
		if(viigr==0)
			viigr=1000;
	}
}*/
// Нельзя изменять значение на которое указывает ссылка на константу
void pointer(int c1,int c2,int c3,int temp, int * viigr){
	if (temp==c1){
		*viigr=1000;
	}
	if(temp==c2){
		if (*viigr!=0)
			*viigr=*viigr*10;	
		if(viigr==0)
			*viigr=1000;
	}
	if(temp==c3){
		if (*viigr!=0)
			*viigr=*viigr*10;
		if(viigr==0)
			*viigr=1000;
	}
}
void pointer_const(int c1,int c2,int c3,int temp, int*const viigr){
	if (temp==c1){
		*viigr=1000;
	}
	if(temp==c2){
		if (*viigr!=0)
			*viigr=*viigr*10;	
		if(viigr==0)
			*viigr=1000;
	}
	if(temp==c3){
		if (*viigr!=0)
			*viigr=*viigr*10;
		if(viigr==0)
			*viigr=1000;
	}
}
void value(int c1,int c2,int c3,int temp, int viigr){
	if (temp==c1){
		viigr=1000;
	}
	if(temp==c2){
		if (viigr!=0)
			viigr=viigr*10;
		if(viigr==0)
			viigr=1000;
	}
	if(temp==c3){
		if (viigr!=0)
			viigr=viigr*10;
		if(viigr==0)
			viigr=1000;
	}
}
/*void value_const(int c1,int c2,int c3,int temp, int *const viigr){
	if (temp==c1){
		viigr=1000;
	}
	if(temp==c2){
		if (viigr!=0)
			viigr=viigr*10;
		if(viigr==0)
			viigr=1000;
	}
	if(temp==c3){
		if (viigr!=0)
			viigr=viigr*10;
		if(viigr==0)
			viigr=1000;
	}
}*/ 
//Тупо пытаться изменить константу
int main(int argc, char** argv) {
	int temp;int c1;int c2; int c3;int viigr;
	c1=number(0);
	c2=number(1);
	c3=number(2);
	cout<<c1<<endl;
	cout<<c2<<endl;
	cout<<c3<<endl;
	cout << "enter a number from 1 to 21:";
	cin >> temp;
	if (temp<=21 & temp>=1){	
		cout << temp<<endl;
	}
	else{	
		cout << "your number is more then 1, or less then one.";
		
		exit(0);
	}
	viigr=0;
	pointer(c1,c2,c3,temp,&viigr);
	cout<<viigr<<endl;
	viigr=0;
	pointer_const(c1,c2,c3,temp,&viigr);
	cout<<viigr<<endl;
	viigr=0;
	reference(c1,c2,c3,temp,viigr);
		cout<<viigr<<endl;
	/*viigr=0;
	reference_const(c1,c2,c3,temp,viigr);
	cout<<viigr;
	*/
	viigr=0;
	value(c1,c2,c3,temp,viigr);
	cout<<viigr<<endl;
	//Если не использовать функцию return и с помощью функции изменить значение, то использовать это тупо
	//viigr=0;
	//value_const(c1,c2,c3,temp,viigr);
	cout<<viigr;
	return 0;

}
