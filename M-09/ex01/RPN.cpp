#include "RPN.hpp"

int calculate(std::string input){
	std::stack<int> polishStack;
	std::string token;
	std::stringstream ss(input);
	while(ss >> token){
		if (token.size() > 1)
			throw std::invalid_argument("Invalid argument");
		else {
				char c = token[0];
				if (std::isdigit(c)) {
					int digit = c - '0';
					polishStack.push(digit);
				} 
				else if (c == '+' || c == '-' || c == '*' || c == '/'){
					if(polishStack.size() < 2)
						throw std::invalid_argument("Invalid argument");
					int operand2 = polishStack.top();
        			polishStack.pop();
        			int operand1 = polishStack.top();
        			polishStack.pop();
					switch(c){
						case '+' :
							polishStack.push(operand1 + operand2);
        					break;
						case '-' :
							polishStack.push(operand1 - operand2);
        					break;
						case '*' :
							polishStack.push(operand1 * operand2);
        					break;
						case '/' :
							polishStack.push(operand1 / operand2);
							if (operand2 == 0) 
                            	throw std::invalid_argument("division by 0");
        					break;
					}
				}
				else 
					throw std::invalid_argument("Invalid argument");
		}
	}
	if (polishStack.size() != 0)
		return (polishStack.top());
	else
		throw std::invalid_argument("Invalid argument");
}