#ifdef _WIN32
#define _WIN32_WINNT 0x0A00
#endif //_WIN32
#define ASIO_STANDALONE
#include <iostream>
#include <boost/asio.hpp>
#include <boost/system/error_code.hpp>
using namespace boost::asio;
using namespace boost::system;
int main(void){
	error_code ec;
	io_context context;
	ip::tcp::endpoint endPoint(ip::make_address("93.184.216.34",ec),80);
	ip::tcp::socket socket(context);
	socket.connect(endPoint,ec);
	if (!ec)
	{
		std::cout << "Connected" << std::endl;
	}
	else
	{
		std::cout << "Failed to connect to address:\n"<<ec.message() << std::endl;
	}
	std::cout<<"hello monkeys"<<std::endl;
	system("pause");
	return 0;
}