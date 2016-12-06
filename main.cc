#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void countChar(char *pName, int argc);
void countLine(char *pName, int argc);

int main(int argc, char *argv[]){
	
	ifstream fileR;
	char *pName;
	
	
	if(argc == 0){
		countLine("Ohio University",argc);
		countChar("Athens",argc);
	}
	else{
		fileR.open("text.txt");
	
		if(fileR.fail()){
			cout << "ERROR ERROR ERRROR\n";
			return 0;
		}
		else{
			while(!fileR.eof()){
				fileR>>pName;
				countChar(pName,argc);
				countLine(pName,argc);
			}
		}
	
		fileR.close();
		
		countChar(pName,argc);
		countLine(pName,argc);
	}
	
	
	return 0;
}

void countChar(char *pName, int argc){
	int count = 0;
	if(argc == 0){
		cout << pName << endl;
		//return 0;
	}
	else{
		while(*pName++)
			count++;
		cout << count << endl;
		
		//return count;
	}
		
}

void countLine(char *pName, int argc){
	int count = 0;
	if(argc == 0){
		cout << pName << endl;
	//	return 0;
	}
	else{
		for(int n = 0; n < strlen(pName); n++){
			if(pName[n] == '\n')
				count++;
			cout << count << endl;
		}
	//	return count;
	}
		
}