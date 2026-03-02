#include <iostream>
#include <vector>
#include "Marketing.hpp"
#include "Sales.hpp"

int main() {

    Marketing::Team marketingTeam("Stellar Corp", {}, 500000);
    
    marketingTeam.addMember("Scott");
    marketingTeam.addMember("Nicole");
    marketingTeam.addMember("Artem");


    Sales::Team salesTeam("Stellar Corp", {}, "London");
    
    salesTeam.addTeamMember("Pratik");
    salesTeam.addTeamMember("Emily");
    salesTeam.addTeamMember("Clive");

    std::cout << "Sales Team Before Relocation: " << '\n';
    salesTeam.printTeamDetails();

    salesTeam.setTeamLocation("New York");

    std::cout << "Sales Team After Relocation: " << '\n';
    salesTeam.printTeamDetails();

    namespace audit = Marketing::Support;
    audit::auditTeam(marketingTeam);
}