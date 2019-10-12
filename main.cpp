#include "IMonitorModule.hpp"
#include "HostnameModule.hpp"
#include "UsernameModule.hpp"
#include "OSVersionModule.hpp"

int main(){
	Data *d;

	UsernameModule imd;
	d = imd.getData();
	std::cout << d->data<< std::endl;

	OSVersionModule osv;
	d = osv.getData();
	std::cout << d->data << std::endl;

	HostnameModule htm;
	d = htm.getData();
	std::cout << d->data << std::endl;


}