# OriginalLightItensity

## *A C++ function of our manuscript "Polarized skylight navigation simulation dataset" by Huaju Liang and Hongyang Bai.*


//Original light intensity is obtained from LI, DOP and AOP

	Camera_PixelIntervalvoid CameraOriginalLightIntensite(
        	const double	LI,		//total light intensity
		const double	Dop,		//degree of polarization
		const double	Aop,		//angle of polarization
		double * OriginalLI,		//original light intensity in different polarization directions
		double k                        //Scale parameter
	)
