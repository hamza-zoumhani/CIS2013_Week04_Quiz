#include <iostream>
using namespace std;

int main(){
	
	for(int n=1; n<101; n++){
		if (n%3=0){
			cout << "Fizz" << endl;
		}if (n%5=0){
			cout << "Buzz" << endl;
		}if (n%15=0){
			cout << "FizzBuzz" << endl;
		}else{
			cout << n << endl;
		}
	}
	
	return 0;
}