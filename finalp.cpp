#include<iostream>
#include<string>
#include<random>
#include<vector>
#include<numeric>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::accumulate;
using namespace std;


class Person{
	public:
	    bool status;
	    bool been_infected;
	    int days_to_wellness;
	    bool recovered;
	    bool vaccinated;
	Person() {
	    status = 0; //status 0 means not currently infected
	    been_infected = 0;
	    recovered = 0; // 1 means recovered
	    days_to_wellness = 0;
 	    vaccinated = 0; // 1 means vaccinated
	}
	string status_string(){
		if (status == 0 && vaccinated == 1){
			return "not sick or susceptible";
		}
		else if (status == 0  && been_infected == 0){
			return "susceptible";
		}
		else if (recovered == 1){
			return "recovered";
		}
		else if (status == 1){
			return "sick";
		}

	};
	//bool status(){ return status };
	void update(){
		if (status == 1 && days_to_wellness > 0){
			
			days_to_wellness = days_to_wellness - 1;
		}
		
		if (days_to_wellness == 0 && been_infected == 1){
			status = 0;
			recovered = 1;
		}
	};
	void infect(int n) {
		
		if (been_infected == 0 && vaccinated == 0){
		    status = 1;
		    days_to_wellness = n;
		    been_infected = 1;
		}
	};
	//string is_stable(){
	
	//};	

};

	
//generates random integer and assigns it to interactions vector
void random_person(int pop_size, vector<int> &interactions, int &i, int z) {
    interactions[i] = (pop_size-1)*(float)rand()/(float)RAND_MAX;
    //check if interacting with self
    if ( z == interactions[i]){
	random_person(pop_size, interactions, i, z);
    }
    //check if repeated interaction
    for(int j = 0; j < i; j++) {
	if (interactions[j] == interactions[i]){
	    random_person(pop_size, interactions, i, z);
	    //cout<< "same number generated!" << endl;
	}
    } 
}

//creates a random vector for purposes of determing interactions
void random_person_vector(int pop_size, vector<int> &interactions, int number_interactions, int z){
	for (int i = 0; i<number_interactions; i++){ 
	    random_person(pop_size,interactions, i ,z);
	}


}

//random propability for determining if successful infection
void random_prob(float &p){
	p = (float)rand()/(float)RAND_MAX;
}


void simulate_day(int &pop_size, vector<Person> &population, int &number_interactions, float &prob_threshold, int &infection_length){
	//z corresponds to person, i corresponds to interactions per person
	for (int z = 0; z < pop_size; z++){
	    //create vector of interactions
	    vector<int> interactions(number_interactions);
	    random_person_vector(pop_size,interactions,number_interactions, z);
	    //loop through interactions to see if infection spreads
	    for (int i = 0; i < number_interactions; i++){
	        //cout << "Person "<< z << " interacts with person " << interactions[i] << endl;
		float p;
		random_prob(p);
		if (p > prob_threshold && population[z].status == 1 ){
			population[interactions[i]].infect(infection_length);
			//cout << "Person " << interactions[i] << " is infected!" << endl;
		}
		if (p > prob_threshold && population[interactions[i]].status == 1){
			population[z].infect(infection_length);
			//cout << "Person " << z << " is infected!" << endl;
		
		}
			
	    }
	    }

}

void simulate_n_days(int &pop_size, vector<Person> &population, int &number_interactions, float &prob_threshold, int &infection_length){
	//simulate until no more active virus
	int day = 0; //day counter

	int active_infected = 1;//total active infected for a day. 1 is dummy variable to start
	vector<int> status_vector(pop_size); //vector that mirrors all person's status
	vector<int> active_infected_daily(1); //vector that assembles active infections per day

	int been_infected = 0; // total "been infected" for each day
	vector<int> been_infected_vector(pop_size); //vector that mirrors all "been infected" status
	vector<int> been_infected_daily(1); //assembles vector of total "been infected" by day

	while ( active_infected > 0 ){
	    day = day + 1;
	    simulate_day(pop_size, population, number_interactions, prob_threshold, infection_length);
	    //track infection and update each person every day
	    for( int z = 0; z < pop_size; z++){
		
		population[z].update();
	        status_vector[z] = population[z].status;
		been_infected_vector[z] = population[z].been_infected;
		/*if (population[z].status == 1){
			active_infected = active_infected + 1;
		}*/
	    }
	   //summation of vector elements to determine total active infected
	   active_infected = accumulate(status_vector.begin(), status_vector.end(), 0);
	   been_infected = accumulate(been_infected_vector.begin(), been_infected_vector.end(), 0);

	   active_infected_daily[day] = active_infected;
	   active_infected_daily.push_back(0);
	   been_infected_daily[day] = been_infected;
	   been_infected_daily.push_back(0);

	   cout << "The active infected on day " << day << " is " << active_infected << endl;
	   cout << "The number that have been infected on day " << day << " is " << been_infected << endl; 
	}

}


int main() {
	//Person joe;
//	for (int day = 1; day < 30; day++){ 
	//joe.update();
	//float bad_luck = (float) rand()/(float)RAND_MAX;
	//if (bad_luck>.95){
 	//joe.infect(5);
//	}
//	cout << "On day " << day << ", Joe is "
//	<< joe.status_string() << endl;
//	}

	int pop_size = 200;
	vector<Person> population(pop_size);
	int number_interactions = 15; //number of interactions per person
	float prob_threshold = .95; //1 - prob_threshold = infection rate
	int infection_length = 5; //days infected

	//determine random infected person (patient zero)
	int catalyst = (pop_size-1)* (float)rand()/(float)RAND_MAX;
	population[catalyst].infect(infection_length);
	cout << "Person " << catalyst << " is infected!" << endl;
	
	//note: does a int*float = int or float? need to check on that and update probabilities if needed	

	//z corresponds to person, i corresponds to interactions for person z
	//one day simulation
	//simulate_day(pop_size, population, number_interactions, prob_threshold, infection_length); 
	
	//int days = 5;

	//vector<int> active_infected; //those who are currently infected
	int total_infected; //those who are or have been infected	
	simulate_n_days(pop_size, population, number_interactions, prob_threshold, infection_length);
		
				
}
