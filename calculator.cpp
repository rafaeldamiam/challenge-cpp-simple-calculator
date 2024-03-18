#include <iostream>
#include <new>

float* ask_number(){
	float* number;
	std::cout << "Enter a number: ";
	number = new float;
	std::cin >> *number;

	return number;
}

char* ask_operator(){
	char* operation;
	std::cout << "Enter the operator (+,-,x,/):";
	operation = new char;
	std::cin >> *operation;

	return operation;
}

int main(){
	float* number_one;
	float* number_two;
	char* operation;
	float* result;

	number_one = new float;
	operation = new char;
	number_two = new float;
	result  = new float;
	
	number_one = ask_number();
	operation = ask_operator();
	number_two = ask_number();

	//Doing this IF because switch case only accept INT variables
	if(*operation == '+'){
		*result = *number_one + *number_two;
	}else if(*operation == '-'){
		*result = *number_one - *number_two;
	}else if(*operation == 'x'){
		*result = *number_one * *number_two;
	}else if(*operation == '/'){
		*result = *number_one / *number_two;
	}else{
		std::cout << "Enter a valid operator"  <<std::endl;
		exit(0);
	}

	std::cout << "The operation is: " << *number_one << *operation << *number_two << " = " << *result <<std::endl;

	delete number_one;
	delete operation;
	delete number_two;
	delete result;


	return 0;
}
