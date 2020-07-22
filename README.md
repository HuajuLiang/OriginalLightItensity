# OriginalLightItensity
Original light intensity is obtained from LI, DOP and AOP
A C++ function of our manuscript "Polarized skylight navigation simulation data set" by Huaju Liang, Hongyang Bai.

void CameraOriginalLightIntensite(
	const double	LI,			//total light intensity    
	const double	Dop,		//degree of polarization 
	const double	Aop,		//angle of polarization 
	int * OriginalLI,			//original light intensity in different polarization directions
	double k              //Scale parameter
	)
