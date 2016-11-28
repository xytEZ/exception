#include <stdio.h>
#include "exception.h"

int
main()
{
  try
    {
      printf("try...\n");
      throw;
      printf("Dead code\n");
    }
  catch (MISMATCH_EXCEPTION)
  {
    printf("Mismatch exception rised !\n");
  }
  catch (NULL_EXCEPTION)
  {
    printf("Null exception rised !\n");
  }
  catch (TYPE_EXCEPTION)
  {
    printf("Type exception rised !\n");
  }
  finally
    {
      printf("... finally\n");
    }
  etry;
  
  return 1;
}
