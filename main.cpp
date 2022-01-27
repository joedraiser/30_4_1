#include <iostream>
#include <cpr/cpr.h>

int main()
{
    std::string input;
    cpr::Response r;

    while(input!="ext")
    {
        std::cout << "Request type: ";
        std::cin >> input;

        if (input =="get")
        {
            r = cpr::Get(cpr::Url("http://httpbin.org/get"));
            std::cout << r.text << std::endl;
        }
        else if(input=="post")
        {
            r = cpr::Post(cpr::Url("http://httpbin.org/post"));
            std::cout << r.text << std::endl;
        }
        else if(input=="put")
        {
            r = cpr::Put(cpr::Url("http://httpbin.org/put"));
            std::cout << r.text << std::endl;
        }
        else if(input=="delete")
        {
            r = cpr::Delete(cpr::Url("http://httpbin.org/delete"));
            std::cout << r.text << std::endl;
        }
        else if(input=="patch")
        {
            r = cpr::Patch(cpr::Url("http://httpbin.org/patch"));
            std::cout << r.text << std::endl;
        }
    }
}
