#include<string>

using namespace std;

class singelton
{
	string wife;

	static singelton *instance_;
	singelton(string W = "no wife still...")
	{
		wife = W;
	}
public:

	static singelton *instance()
	{
		if (!instance_)
			instance_ = new singelton;
		return instance_;
	}
	string get_name()
	{
		return wife;
	}
	void set_name(string W)
	{
		wife = W;
	}
};

singelton* singelton::instance_ = NULL;