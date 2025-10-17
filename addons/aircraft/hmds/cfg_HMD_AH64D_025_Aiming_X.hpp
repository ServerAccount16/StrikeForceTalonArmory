class Aiming_X_Static
{
	type="group";
	condition="(2-(abs(cameraHeadingDiffY)<=3)-(abs(cameraHeadingDiffX)<=3))+(1-rocket-mgun)";
	class aim_X
	{
		type="line";
		width=5;
		points[]=
		{
			{ { 0.5,0.48 },1 },
			{ { 0.5,0.45 },1 },
			{},
			{ { 0.5,0.52 },1 },
			{ { 0.5,0.55 },1 },
			{},
			{ { 0.48,0.5 },1 },
			{ { 0.45,0.5 },1 },
			{},
			{ { 0.52,0.5 },1 },
			{ { 0.55,0.5 },1 }
		};
	};
};