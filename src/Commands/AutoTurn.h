#ifndef AutoTurn_H
#define AutoTurn_H

#include "../CommandBase.h"

class AutoTurn : public CommandBase {
public:
	AutoTurn(double, double);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	double rate;
	double currentAngle;
	double initialAngle;
	double target;
};

#endif  // AutoTurn_H
