#include  "account.hpp"
	
	int	Account ::getNbAccounts( void ){
		return (_nbAccounts);
	}
	 int	Account ::getTotalAmount( void ){
		return (_totalAmount);
	}
	 int	Account :: getNbDeposits( void ){
		return (_totalNbDeposits);
	}
	int	Account ::getNbWithdrawals( void ){
		return (_totalNbWithdrawals);
	}
		Account :: Account(int initial_deposit ){
			_displayTimestamp();
			_accountIndex= Account::getNbAccounts();
			_nbDeposits = 0;
			_nbWithdrawals = 0;
			_amount= initial_deposit;
			_totalAmount += initial_deposit;
			_nbAccounts++;
			std::cout << "index:" << this->_accountIndex << ";";
			std::cout << "amount:" << checkAmount() << ";created" << std::endl;

	}
	Account :: ~Account( void ){
		_displayTimestamp();
		this->_nbAccounts--;
		_totalAmount -= checkAmount();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "amount:" << checkAmount() << ";closed" << std::endl;
		
		
	}
	void	Account ::makeDeposit( int deposit ){
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << checkAmount() << ";";
		if (deposit> 0){
			std::cout << "deposit:" << deposit << ";";

		_totalAmount += deposit;
		_totalNbDeposits++;
		_amount = deposit + _amount;
		_nbDeposits++;
		std::cout << "amount:" << checkAmount() << ";";
		std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
		// std::cout << _amount << " has been add to the account :   " << _accountIndex <<  std::endl;
		}
			else
				std::cout << "deposit:refused" << std::endl;

	}
	bool	Account :: makeWithdrawal( int withdrawal ){
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "amount:" << checkAmount() << ";";
		if (_amount < withdrawal){
			std::cout << "withdrawal:refused" << std::endl;
			// std::cout << "not enough money in the account!!" << std::endl;
			return (false);
		}
		else if (withdrawal > getTotalAmount()){
			std::cout << "not enough money in the bank!!" << std::endl;
			return (false);
		}
		else{
			std::cout << "withdrawal:" << withdrawal << ";";
			_totalAmount -= withdrawal;
			_totalNbWithdrawals++;
			_amount -=withdrawal;
			_nbWithdrawals++;
			std::cout << "amount:" << Account::checkAmount() << ";";
			std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
			//std::cout << _amount << " has been withdrawn from account " << _accountIndex <<  std::endl;
			return (true);
		}
		
	}
	int		Account :: checkAmount( void ) const{
		return(this->_amount);

	}
	void	Account :: displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;

	}
	void	Account ::_displayTimestamp( void ){
		//faire une focntion qui va chercher la date
		//std::cout << "[19920104_091532] ";
		std::time_t time = std::time(0);
    	std::tm* current_time = std::localtime(&time);
    	std::cout << "[" << (current_time->tm_year + 1900);
		if (current_time->tm_mon <10)
			std::cout<< "0";
		std::cout << (current_time->tm_mon + 1) << current_time->tm_mday << "_"
         << (current_time->tm_hour) << (current_time->tm_min) << (current_time->tm_sec) << "] ";
	}

void Account::displayAccountsInfos() {
  _displayTimestamp();
  std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
            << ";deposits:" << _totalNbDeposits
            << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

	
		int Account::_nbAccounts = 0;
		int Account::_totalAmount = 0;
		int Account::_totalNbDeposits = 0;
		int Account::_totalNbWithdrawals = 0;