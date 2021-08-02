#include <iostream>

#include "PNGimage2.h"

using namespace std;



int main()
{
	PNGimage img(1,1);
	
	
	for(auto i=0; i<10; i++) for(auto j=0; j<10; j++) img.set_pixel(i,j, 0xFF,0xAD,0x00);
	
	img.save_file("prova.png", 10*3);
	
	
	unsigned char r,g,b;
	for(auto i=0; i<10; i++){
		for(auto j=0; j<10; j++){
			img.get_pixel(i,j, r,g,b);
			cout << hex << (int)r << " " << (int)g << " " << (int)b << "   ";
		}
		cout << endl;
	}
	
	
	return 0;
}
