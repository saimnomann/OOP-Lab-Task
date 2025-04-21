#include<iostream>
using namespace std;
class Activity{
	protected:
		double calories;
	public:
	virtual	void calculateCaloriesBurned()=0;
	   virtual void showCalories() {
        cout << "Calories Burned: " << calories << " kcal" << endl;
    }
};
class Running:public Activity{
	double distance;
	double time;
	public:
		Running(double d,double t){
			distance=d;
			time=t;
		}
	void calculateCaloriesBurned(){
		calories=(time * 10) + (distance * 20);
	}
};
	class Cycling:public Activity{
		double distance;
		double time;
		public:
			Cycling(double d,double t){
				this->distance=d;
				this->time=t;
			}
			void calculateCaloriesBurned(){
			calories = (time * 8) + (distance * 15);
			}
			
	};
	
int main() {
    Running run(8.0, 45.0);    
    Cycling cycle(12.0, 60.0); 

    run.calculateCaloriesBurned();
    cycle.calculateCaloriesBurned();

    cout << "--- Running Activity ---" << endl;
    run.showCalories();

    cout << "--- Cycling Activity ---" << endl;
    cycle.showCalories();

    return 0;
}