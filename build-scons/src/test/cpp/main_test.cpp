#include "../../main/headers/linearMainFrame.hpp"
#include "../../main/headers/textView.hpp"

using namespace std;

int main()
{
	TextView t(1,1,string("t"));
	LinearMainFrame m(1,1,string("m"),string("1|id:t"));
	View *a = &t , *b = &m;
	return 0;
}
