#include "crow_all.h"

int main(int argc, char* argv[]){
    crow::SimpleApp app;

    CROW_ROUTE(app,"/")([](){
        return "teste";
        });

    app.port(8080).multithreaded().run();

    return 0;
}