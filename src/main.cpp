#include <iostream>
#include <string>
#include <string.h>
#include "cipher_helper.h"


int main(int argc, char *argv[])
{
    std::cout << "Hello world! " << std::endl;
  	char context[128] = {0};
    sprintf(context, "%s|%s|%s", "ad", "afaf", "vavv");
    std::cout << context << std::endl;
    char md5_param[33] = {0};
    md5(context, strlen(context), md5_param);
	  std::cout << md5_param << std::endl;
}