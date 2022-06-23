#include <iostream>
#include <string.h>

using namespace std;

struct Graph{
	char kata1, kata2, kata3, kata4, kata5;
	int a, b, c, d, e, f, g, h, j;

};

Graph gph;

void inisialisasi();
void Undigraph();
void Digraph();
void wei_graph();

int main(){
	
	inisialisasi();
	Undigraph();
	Digraph();
	wei_graph();
}

void inisialisasi(){
	cout<<"titik 1: "; cin>>gph.kata1 ;
	cout<<"titik 2: "; cin>>gph.kata2;
	cout<<"titik 3: "; cin>>gph.kata3;
	cout<<"titik 4: "; cin>>gph.kata4;
	cout<<"titik 5: "; cin>>gph.kata5;
	cout<<endl;
}
void Undigraph(){
	
	cout<<"Output dari Undigraph : "<<endl;
	cout<<"Garis yang dapat dibentuk: "<<endl;
	cout<<gph.kata1<<gph.kata2<<", ";
	cout<<gph.kata1<<gph.kata3<<", ";
	cout<<gph.kata2<<gph.kata1<<", ";
	cout<<gph.kata2<<gph.kata3<<", ";
	cout<<gph.kata2<<gph.kata4<<", ";
	cout<<gph.kata3<<gph.kata1<<", ";
	cout<<gph.kata3<<gph.kata2<<", ";
	cout<<gph.kata3<<gph.kata5<<", ";
	cout<<gph.kata4<<gph.kata2<<", ";
	cout<<gph.kata4<<gph.kata5<<", ";
	cout<<gph.kata5<<gph.kata3<<", ";
	cout<<gph.kata5<<gph.kata4<<endl<<endl<<endl;
}

void Digraph(){
	
	cout<<"Output dari Digraph :"<<endl;
	cout<<"Garis yang dapat dibentuk: "<<endl;
	cout<<gph.kata1<<gph.kata2<<", ";
	cout<<gph.kata1<<gph.kata3<<", ";
	cout<<gph.kata3<<gph.kata2<<", ";
	cout<<gph.kata3<<gph.kata5<<", ";
	cout<<gph.kata5<<gph.kata4<<", ";
	cout<<gph.kata4<<gph.kata2<<endl<<endl<<endl;
}

void wei_graph(){
	
	cout<<"Output dari Weight Graph :"<<endl;
	cout<<"Garis yang dapat dibentuk: "<<endl;
	cout<<gph.kata1<<gph.kata2<<", ";
	cout<<gph.kata2<<gph.kata3<<", ";
	cout<<gph.kata3<<gph.kata5<<", ";
	cout<<gph.kata4<<gph.kata3<<", ";
	cout<<gph.kata4<<gph.kata5<<", ";
	cout<<gph.kata1<<gph.kata4<<", ";
	cout<<gph.kata2<<gph.kata1<<", ";
	cout<<gph.kata5<<gph.kata2<<endl<<endl<<endl;

	cout<<"Busur simpul "<<gph.kata1<<" dengan "<<gph.kata2<<": "; cin>>gph.a;
	cout<<"Busur simpul "<<gph.kata1<<" dengan "<<gph.kata3<<": "; cin>>gph.b;
	cout<<"Busur simpul "<<gph.kata2<<" dengan "<<gph.kata3<<": "; cin>>gph.c;
	cout<<"Busur simpul "<<gph.kata2<<" dengan "<<gph.kata4<<": "; cin>>gph.d;
	cout<<"Busur simpul "<<gph.kata4<<" dengan "<<gph.kata5<<": "; cin>>gph.e;
	cout<<"Busur simpul "<<gph.kata5<<" dengan "<<gph.kata3<<": "; cin>>gph.f;
	cout<<endl<<endl;
	cout<<"jadi panjang jarak total nya ="<<gph.a+gph.b+gph.c+gph.d+gph.e+gph.f<<endl<<endl;
	
}

