#include <iostream>
#include <string>
int main()
{
   std::string command;
   std::cout << "请输入：";
   while(1)
   {
     std::cout << "/>";
     if(!std::getline(std::cin,command))
     break;
     if(command == "exit")
     break;
     else
     std::cout << "Command: " << command << std::endl;
   }
   return 0;

}