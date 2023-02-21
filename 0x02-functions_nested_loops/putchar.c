#include <unistd.h>

/*displayPutchar - writes the character c to stdout*/

int displayPutchar(char c)
{
  return (write(1, &c, 1));
}
