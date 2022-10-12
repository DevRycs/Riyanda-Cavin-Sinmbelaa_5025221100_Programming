// NAMA		: RIYANDA CAVIN SINAMBELA
// NRP		: 5025221100
// Jurusan	: TEKNIK INFORMATIKA

#include <iostream>
#include <cmath>

#define GRAVITASI 10			 // 10 m/s^2
#define START_PENGUKURAN 1 // pengukuran dimulai dari 1 meter
#define SUDUT 45					 // sudut elevasi tembakan

using namespace std;
float mencari_V0(int range)
{
	float V0;
	V0 = sqrt(range * GRAVITASI);
	V0 += 5;
	return V0;
}

int speed_dgn_loss(int speed)
{
	if (speed >= 1 && speed <= 10)
	{
		speed -= 1;
	}
	else if (speed >= 11 && speed <= 20)
	{
		speed -= 3;
	}
	else
	{
		speed -= 5;
	}
	return speed;
}

int main()
{
	int input, jarak;
	float Vtangensial;
	cin >> input;

	jarak = speed_dgn_loss(input);
	jarak = ((jarak * jarak) / GRAVITASI);
	Vtangensial = mencari_V0(jarak);

	cout << jarak << " " << Vtangensial << endl;
	return 0;
}