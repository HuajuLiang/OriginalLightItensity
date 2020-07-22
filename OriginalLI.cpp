//Original light intensity is obtained from LI, DOP and AOP
void CameraOriginalLightIntensite(
	const double	LI,			//total light intensity    
	const double	Dop,		//degree of polarization 
	const double	Aop,		//angle of polarization 
	int * OriginalLI,			//original light intensity in different polarization directions
	double k                    //Scale parameter
	){
	double Q = Dop*LI*cos(2 * Aop);
	double U = Dop*LI*sin(2 * Aop);
	double Stokes2IntensityM[4][3] =
	{ 0.5, 0.5, 0.0,
	0.5, 0, 0.5,
	0.5, -0.5, 0.0,
	0.5, 0, -0.5 };
	double Stokes[3][1] = { LI, Q, U };
	double cameraOLI[4][1] = { 0.0, 0.0, 0.0, 0.0 };
	MatrixMultiply(4, 3, 1, Stokes2IntensityM[0], Stokes[0], cameraOLI[0]);

	OriginalLI[0] = int(cameraOLI[0][0] * k);//LI0
	OriginalLI[1] = int(cameraOLI[1][0] * k);//LI45
	OriginalLI[2] = int(cameraOLI[2][0] * k);//LI90
	OriginalLI[3] = int(cameraOLI[3][0] * k);//LI135

	for (int i = 0; i <= 3; i++){
		if (OriginalLI[i] > 255){
			OriginalLI[i] = 255;
		}
	}
}

//Matrix multiplication   c=a*b where a[m][p] b[p][n] c[m][n]
void MatrixMultiply(int m, int p, int n, const double *a, const double *b, double *c)
{
	double temp = 0;
	for (int i = 0; i<m; i++)
		for (int j = 0; j<n; j++)
		{
			temp = 0;
			for (int k = 0; k<p; k++)
				temp += (a[p*i + k]) *  (b[k*n + j]);
			c[n*i + j] = temp;
		}
}
