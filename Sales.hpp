#include <iostream>
#include <vector>
namespace Sales {

	class Team {
	
	private:
		
		std::string teamName;
		std::string teamLocation;
		std::vector<std::string> teamMembers;

	public:

		std::string getTeamName() {
			return teamName;
		}
		
		std::vector <std::string> getTeamMembers() {
			return teamMembers;
		}

		std::string getTeamLocation(){
			return teamLocation;
		}

		void setTeamLocation(std::string newLocation) {
			teamLocation = newLocation;
		}

		void addTeamMember(std::string member){
			teamMembers.push_back(member);
		}

		void printTeamDetails() {
			std::cout << "Sales Team Name: " << teamName << '\n';
			std::cout << "Team Location " << teamLocation << '\n';
			std::cout << "Members: ";
			for (const auto& member : teamMembers){
				std::cout << member << " " << '\n';
			}
			
		}



		Team(const std::string name, const std::vector <std::string> members, const std::string location) :
			teamName(name),
			teamMembers(members),
			teamLocation(location){

			}

	};

}