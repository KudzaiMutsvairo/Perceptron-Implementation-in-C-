#include<iostream>

using namespace std;

enum gender {
	Female, Male
};

class Ptron
{
	public :
	double w0, w1, w2;
	double q;
	
	bool setWeights(double a, double b, double c)
	{
		
		this->w0 = a;
		this->w1 = b;
		this->w2 = c;
		if(w0 == a && w1 == b && w2 == c)
			return true;
		else
			return false;
	}
	
	bool setPhi(double phi)
	{
		this->q = phi;
		if(q == phi)
			return true;
		else return false;
	}
	
	double wSum(double x1, double x2)
	{
		return (this->w0*this->q)+(this->w1*x1)+(this->w2*x2);
	}
}Ptron1;

int main()
{
	cout << "this program simulates a perceptron for the weighted sum of 2 input values x1 and x2\n";
	cout << "Set the values of the weights"<<endl;
	double wt1, wt2, wt3, ph;
	cout << "input should be as follows WEIGHTS: w0 w1 w2"<<endl;
	cout<<"WEIGHTS: ";
	cin>>wt1;
	cin>>wt2;
	cin>>wt3;
	Ptron1.setWeights(wt1, wt2, wt3);
	
	cout << "Give the value of Phi"<<endl;
	cin >> ph;
	Ptron1.setPhi(ph);
	
	cout << "type in input to get weighted sum"<<endl;
	double in1, in2;
	cout <<"input should be as follows  INPUTS: x1 x2"<<endl;
	cout <<"INPUT: ";
	cin >> in1;
	cin >> in2;
	
	cout <<"the weighted sum is: ";
	cout<< Ptron1.wSum(in1, in2);
	
	return 0;
}
