# OriginalLightItensity

## *A C++ function of our manuscript "Polarized skylight navigation simulation data set" by Huaju Liang and Hongyang Bai.*

//Original light intensity is obtained from LI, DOP and AOP
void CameraOriginalLightIntensite(<br>  
        const double	LI,		//total light intensity<br>
	const double	Dop,		//degree of polarization<br>
	const double	Aop,		//angle of polarization<br>
	int * OriginalLI,		//original light intensity in different polarization directions<br>
	double k                        //Scale parameter<br>
	)
