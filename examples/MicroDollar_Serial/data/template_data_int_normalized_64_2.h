#ifndef _TEMPLATE_DATA_INT_NORMALIZED_64_2_H_
#define _TEMPLATE_DATA_INT_NORMALIZED_64_2_H_

namespace TemplateDataIntNormalized64_2
{
	int circleCCWPoints[] = 
	{-1639,4,-1786,397,-1688,807,-1475,1167,-1147,1429,-787,1659,-410,1839,-17,2003,408,2068,834,2052,1244,1954,1571,1692,1817,1347,1948,938,1997,512,2014,86,1981,-339,1834,-732,1686,-1125,1440,-1470,1129,-1764,752,-1945,343,-2027,-66,-1961,-476,-1846,-885,-1732,-1278,-1584,-1655,-1388,-1966,-1093,-2081,-683,-1917,-290,-1737,37};

	int circleCWPoints[] = 
	{-963,4,-1096,-375,-1162,-772,-1063,-1152,-831,-1465,-499,-1697,-118,-1845,263,-1994,661,-1994,992,-1796,1224,-1465,1390,-1102,1506,-706,1589,-309,1606,103,1589,516,1573,912,1490,1308,1324,1672,1092,1985,727,2101,312,2068,-51,1886,-366,1639,-648,1341,-864,1011,-980,615,-1030,218,-1328,-12,-1726,-128,-2108,-227,-2489,-342};

	int nSamplePoints[] = { 64, 64 };

	int * samplePoints[] = 
	{ 
		circleCCWPoints, circleCWPoints	
	};

	const char * sampleNames[] = 
	{
		"circleCCW", "circleCW"
	};
	
	int nTemplates = 2; //N_TEMPLATES;

	bool samplesNormalized = true;	
}

#endif
