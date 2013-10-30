/* incr.c ---
 * 
 * Author: Julien Wintz
 * Created: Fri Jun 21 16:13:33 2013 (+0200)
 * Version: 
 * Last-Updated: Fri Jun 21 16:15:13 2013 (+0200)
 *           By: Julien Wintz
 *     Update #: 11
 */

/* Change Log:
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int  input = atoi(argv[1]);
    int output = input+1;

    printf("%d\n", output);

    return 0;
}
