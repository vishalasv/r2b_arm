#include "arduinotypeinterface.h"
#include<stdlib.h>

bool task_done = false;


//ony thing here is after actual coordinates each othrs are stepped down 1 cm each with angle just keep a track of it

// void pick1()
// {
// 	r2b.setJointAngles(71.5024, -69.3768);
// 	delay(1000);
// 	r2b.setJointAngles(64.2717, -59.5189);
// 	delay(1000);
// 	r2b.setJointAngles(56.2001, -47.5602);
// 	delay(1000);
// 	r2b.toggleGrasp();
// 	r2b.setJointAngles(64.2717, -59.5189);
// 	delay(1000);
// 	r2b.setJointAngles(71.5024, -69.3768);
// 	delay(1000);

// }



//ony thing here is after actual coordinates each othrs are stepped down 1 cm each with angle just keep a track of it


void pick1()
{
	r2b.toggleGrasp();
	r2b.setJointAngles(90, -50);
	delay(2000);
	r2b.setJointAngles(98.0124, -98.2018);
	delay(1000);
	r2b.setJointAngles(91.4513, -92.1622);
	delay(1000);
	r2b.setJointAngles(84.9158, -85.4271);	
	delay(1000);
	r2b.setJointAngles(78.3114, -77.8946);
	delay(1000);
	r2b.setJointAngles(71.5024, -69.3768);
	delay(1000);
	r2b.setJointAngles(64.2717, -59.5189);
	delay(1000);
	r2b.setJointAngles(56.2001, -47.5602);
	delay(1000);
	r2b.setJointAngles(64.2717, -59.5189);
	delay(1000);
	r2b.setJointAngles(71.5024, -69.3768);
	delay(1000);
	r2b.setJointAngles(78.3114, -77.8946);
	delay(1000);
	r2b.setJointAngles(84.9158, -85.4271);	
	delay(1000);
	r2b.setJointAngles(91.4513, -92.1622);
	delay(1000);
	r2b.setJointAngles(98.0124, -98.2018);
	delay(1000);
	r2b.setJointAngles(90, -50);
	delay(2000);
}

void pick2()
{
	r2b.toggleGrasp();
	r2b.setJointAngles(90, -50);
	delay(2000);
	r2b.setJointAngles(91.5719, -118.4385);
	delay(1000);
	r2b.setJointAngles(85.1285, -111.7948);
	delay(1000);
	r2b.setJointAngles(78.9556, -104.7041);	
	delay(1000);
	r2b.setJointAngles(72.9234, -97.114);
	delay(1000);
	r2b.setJointAngles(66.9053, -88.9305);
	delay(1000);
	r2b.setJointAngles(60.7616, -79.997);
	delay(1000);
	r2b.setJointAngles(54.31, -70.0463);
	delay(1000);
	r2b.setJointAngles(60.7616, -79.997);
	delay(1000);
	r2b.setJointAngles(66.9053, -88.9305);
	delay(1000);
	r2b.setJointAngles(72.9234, -97.114);
	delay(1000);
	r2b.setJointAngles(78.9556, -104.7041);	
	delay(1000);
	r2b.setJointAngles(85.1285, -111.7948);
	delay(1000);
	r2b.setJointAngles(91.5719, -118.4385);
	delay(1000);
	r2b.setJointAngles(90, -50);
	delay(2000);
}	

void pick3()
{
	r2b.toggleGrasp();
	r2b.setJointAngles(90, -50);
	delay(2000);
	r2b.setJointAngles(70.668, -127.5429);
	delay(1000);
	r2b.setJointAngles(66.2069, -120.2931);
	delay(1000);
	r2b.setJointAngles(61.7665, -112.7659);	
	delay(1000);
	r2b.setJointAngles(57.2668, -104.8912);
	delay(1000);
	r2b.setJointAngles(52.63, -96.5733);
	delay(1000);
	r2b.setJointAngles(47.7662, -87.6754);
	delay(1000);
	r2b.setJointAngles(42.5542, -77.9877);
	delay(1000);
	r2b.setJointAngles(47.7662, -87.6754);
	delay(1000);
	r2b.setJointAngles(52.63, -96.5733);
	delay(1000);
	r2b.setJointAngles(57.2668, -104.8912);
	delay(1000);
	r2b.setJointAngles(61.7665, -112.7659);	
	delay(1000);
	r2b.setJointAngles(66.2069, -120.2931);
	delay(1000);
	r2b.setJointAngles(70.668, -127.5429);
	delay(1000);
	r2b.setJointAngles(90, -50);
	delay(2000);
}

//I will come to zero first then easily 1cm reduction for each in place functions in y coords

// void place1()
// {
// 	r2b.setJointAngles(90, -50);
// 	delay(2000);
// 	r2b.setJointAngles(60.0092, -84.3007);
// 	delay(1000);
// 	r2b.setJointAngles(57.0363, -86.716);
// 	delay(1000);
// 	r2b.setJointAngles(53.5456, -88.4076);
// 	delay(1000);
// 	r2b.setJointAngles(49.5837, -89.3801);
// 	delay(1000);
// 	r2b.setJointAngles(45.8628, -89.6423);//0coords
// 	delay(1000);
// 	r2b.setJointAngles(41.8702, -89.3801);
// 	delay(1000);
// 	r2b.toggleGrasp();
// 	r2b.setJointAngles(45.8628, -89.6423);
// 	delay(1000);
// 	r2b.setJointAngles(49.5837, -89.3801);
// 	delay(1000);
// 	r2b.setJointAngles(53.5456, -88.4076);
// 	delay(1000);
// 	r2b.setJointAngles(57.0363, -86.716);
// 	delay(1000);
// 	r2b.setJointAngles(60.0092, -84.3007);
// 	delay(1000);
// 	r2b.setJointAngles(90, -50);
// 	delay(2000);
// }

// void place2()
// {
// 	r2b.setJointAngles(90, -50);
// 	delay(2000);
// 	r2b.setJointAngles(83.5363, -115.835);
// 	delay(1000);
// 	r2b.setJointAngles(79.2404, -118.542);
// 	delay(1000);
// 	r2b.setJointAngles(74.1374, -120.4841);
// 	delay(1000);
// 	r2b.setJointAngles(68.3098, -121.6191);
// 	delay(1000);
// 	r2b.setJointAngles(62.8514, -121.9275);//0coords
// 	delay(1000);
// 	r2b.setJointAngles(57.0607, -121.6191);
// 	delay(1000);
// 	r2b.toggleGrasp();
// 	r2b.setJointAngles(62.8514, -121.9275);//0coords
// 	delay(1000);
// 	r2b.setJointAngles(68.3098, -121.6191);
// 	delay(1000);
// 	r2b.setJointAngles(74.1374, -120.4841);
// 	delay(1000);
// 	r2b.setJointAngles(79.2404, -118.542);
// 	delay(1000);
// 	r2b.setJointAngles(83.5363, -115.835);
// 	delay(1000);
// 	r2b.setJointAngles(90, -50);
// 	delay(2000);
// }

// void place3()
// {
// 	r2b.setJointAngles(90, -50);
// 	delay(2000);
// 	r2b.setJointAngles(112.586, -140.3947);
// 	delay(1000);
// 	r2b.setJointAngles(106.8101,-144.3386);
// 	delay(1000);
// 	r2b.setJointAngles(98.8701, -147.349);
// 	delay(1000);
// 	r2b.setJointAngles(88.7507, -149.1981);
// 	delay(1000);
// 	r2b.setJointAngles(62.8514, -121.9275);//0coords
// 	delay(1000);
// 	r2b.setJointAngles(68.0471, -149.1981);
// 	delay(1000);
// 	r2b.toggleGrasp();
// 	r2b.setJointAngles(62.8514, -121.9275);//0coords
// 	delay(1000);
// 	r2b.setJointAngles(88.7507, -149.1981);
// 	delay(1000);
// 	r2b.setJointAngles(98.8701, -147.349);
// 	delay(1000);
// 	r2b.setJointAngles(106.8101,-144.3386);
// 	delay(1000);
// 	r2b.setJointAngles(112.586, -140.3947);
// 	delay(1000);
// 	r2b.setJointAngles(90, -50);
// 	delay(2000);
// }


// 	void place1()
// {
// 	r2b.setJointAngles(90, -50);
// 	delay(2000);
// 	r2b.setJointAngles(85, -55);
// 	delay(0500);
// 	r2b.setJointAngles(80, -60);
// 	delay(0500);
// 	r2b.setJointAngles(75, -65);
// 	delay(0500);
// 	r2b.setJointAngles(70, -70);
// 	delay(0500);
// 	r2b.setJointAngles(65, -75);
// 	delay(0500);
// 	r2b.setJointAngles(62.5, -85);
// 	delay(0500);
// 	r2b.setJointAngles(60, -87);
// 	delay(0500);
// 	r2b.setJointAngles(58.731, -89.4155);
// 	delay(1000);
// 	r2b.toggleGrasp();
// 	delay(1000);
// 	r2b.setJointAngles(90, -50);
// 	delay(2000);
// }

void place1()
{
	r2b.setJointAngles(90, -50);
	delay(2000);
	
	r2b.setJointAngles(59.8505, -91.1782);
	delay(1000);
	r2b.toggleGrasp();
	
	delay(1000);
	
	r2b.setJointAngles(90, -50);
	delay(2000);
}



void place2()
{
	r2b.setJointAngles(90, -50);
	delay(2000);
	
	r2b.setJointAngles(81.5655, -121.3517);
	delay(1000);
	r2b.toggleGrasp();
	
	delay(1000);
	
	r2b.setJointAngles(90, -50);
	delay(2000);
}

void place3()
{
	r2b.setJointAngles(90, -50);
	delay(2000);
	
	r2b.setJointAngles(109.0835, -145.7652);
	delay(1000);
	r2b.toggleGrasp();
	
	delay(1000);
	
	r2b.setJointAngles(90, -50);
	delay(2000);
}

void setup(void){

    ROS_INFO_STREAM("Example task: This task will go towards the top box, and then go to the place where it needs to be placed");

}

void loop(void){

	

    ROS_INFO_STREAM("Starting the task...");
		delay(1000);

     

		// pick1();
		// place1();
		

		
		

		pick2();
		place2();


		pick3();
		place3();
		



		

		ROS_INFO_STREAM("Task done");
		task_done = true;
		return;
}