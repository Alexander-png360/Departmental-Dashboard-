#include <iostream>
#include <vector>

namespace Marketing {
	
	class Team {
	
	private:
		std::string teamName = "Blank";
		std::vector<std::string> teamMembers;
		double teamBudget = 0;
	public: 

		double getBudget(){
			return teamBudget;
		}

		void setBudget(double newBudget) {
			teamBudget = newBudget;
		}

		const std::vector<std::string>& getMembers() {
			return teamMembers;
		}

		std::string getName() {
			return teamName;
		}

		void addMember(const std::string& member){
			teamMembers.push_back(member);
		}

		int getMemberCount() {
			return teamMembers.size();
		}

		//Constructor
		Team(std::string name, std::vector<std::string> members, double budget) :
			teamName(name),
			teamMembers(members),
			teamBudget(budget)
			{
			}
			

	};

	namespace Support {

		void auditTeam(Team& team) {
			
			//Print Team Name
			std::cout << "Auditing Marketing Team: " << team.getName() << '\n';


			//List Team Members
			std::cout << "Members: " << '\n';
			const auto& members = team.getMembers();
			for (const auto& member : members) {
				std::cout << "- " << member << '\n';
			}

			std::cout << "Budget: $" << team.getBudget() << '\n';

		}

	}


}