#include "activitati.h"

class CBST {
public:
	CActivitati *rad;
	CBST() {}
	CActivitati* inserare(CActivitati a);
	void inordine(CActivitati* r);
};
