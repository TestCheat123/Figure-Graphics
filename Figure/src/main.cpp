#include <iostream>

#include <iostream>

#include <EngineCore/Application.hpp>

class MyApp : public Engine::Application
{

    int frame = 0;
    virtual void on_update() override
    {
        std::cout << "Update frame: " << frame++ << std::endl;
    }

};

int main()
{
    auto myApp = std::make_unique<MyApp>();

    int returnCode = myApp->start(1024, 768, "My first App");

    //std::cin.get();

    return returnCode;
}