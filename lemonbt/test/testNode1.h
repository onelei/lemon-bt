
#ifndef TESTNODE1_H
#define TESTNODE1_H
#include <vector>
#include "../inc/Action.h"
#include "../inc/Result.h"
using namespace lemonbt;

class testNode1 : public Action
{
public:

	Result doAction();
};

#endif // TESTNODE1_H
