#pragma once
class Closet
{
public:
	Closet();
	~Closet();

	bool Open();
	bool Close();

private:
	bool isOpen;	

};

