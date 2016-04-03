// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include<stdio.h>
#include<stdlib.h>


using namespace std; 
//string python_data;
bool newData = false;
const int MAX_BUFFER = 255;

int main() {
	

	//bool quit = false; 
	//string input;
	//char myvalues [256];


//	while (!quit) {

//			std::cin >> input;
//			//scanf_s("%d", &myvalue);
//		//	if (fgets(myvalues, 256, stdin)) {
//
////				cout << myvalues[2] << endl; 
////			}
//			std::cout << input << endl;
//			cout.flush();
//
//		if (!cin) {
//			quit = true;}
//	}
		
		int input_line;
			
			for (std::string line; std::getline(std::cin, line);) {
				std::cout << line << std::endl;
			}

		//	cin >> python_data;
		//	cout << python_data << endl;
			//cout.flush();
			//newData = false;

	return 0; 
}

void setData(string S) {
	//python_data = S;
//	newData = true;
}
