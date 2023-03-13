#include <iostream>
#include <iomanip>



class Contacts {

	public:
		void		create_contact(int index, bool full);
		void		set_darkest_secret(void);
		void		set_phone_number(void);
		void		set_first_name(void);
		void		set_nickname(void);
		void		set_last_name(void);
		void		print_contact(int index);
		void		print_info(std::string info);
		void		show_contact_info(void);

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};
