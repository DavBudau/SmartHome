#include "House.h"

int main()
{
	Temperature temp_dormitor, temp_baie, temp_bucatarie, temp_sufragerie;
	Pressure press_sufragerie, press_bucatarie;
	Humidity hum_baie, hum_sufragerie;

	House casa;

	Bedroom dormitor;
	dormitor.addSensor(&temp_dormitor);

	Bathroom baie;
	baie.addSensor(&hum_baie);
	baie.addSensor(&temp_baie);

	Living sufragerie;
	sufragerie.addSensor(&press_sufragerie);
	sufragerie.addSensor(&temp_sufragerie);
	sufragerie.addSensor(&hum_sufragerie);

	Kitchen bucatarie;
	bucatarie.addSensor(&temp_bucatarie);
	bucatarie.addSensor(&press_bucatarie);


	casa.addRoom(&dormitor);
	casa.addRoom(&baie);
	casa.addRoom(&sufragerie);
	casa.addRoom(&bucatarie);

	casa.collectRoomData();

	casa.viewRoomData();
	casa.removeRoom(0);
	casa.viewRoomData();


}
