#include "../sleepIn.cpp"
#include <cassert>

int main()
{
	assert(sleepIn(false, true) == true);
	assert(sleepIn(true, true) == false);
    assert(sleepIn(false, false) == false);
    assert(sleepIn(true, false) == false);
}