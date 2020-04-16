#include "MS.h"
/**
 * @sh :sh
 *
*/
void sighand(int sg)
{
if (sg == SIGINT)
_puts("\n$ ");
}
