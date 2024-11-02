#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *name[] = {"Snake", "Water", "Gun"};

void won(int a, int b)
{
  printf("You chose %s and Compute chose %s\n", name[a], name[b]);
}

int main()
{

  srand(time(0));

  while (1)
  {
    int user;
    int compu = rand() % 3;
    printf("To Exit = 9\n");
    printf("For Sanke Enter  = 0\n");
    printf("For Water Enter  = 1\n");
    printf("For Gun Enter    = 2\n");

    scanf("%d", &user);

    if (user == 9)
    {
      break;
    }

    else
    {
      if (user == compu)
      {
        printf("Its a draw\n");
      }
      else if ((user == 0 && compu == 1) || (user == 1 && compu == 2) || (user == 2 && compu == 0))
      {
        won(user, compu);
        printf("You won\n");
      }
      else if ((user == 0 && compu == 2) || (user == 1 && compu == 0) || (user == 2 && compu == 1))
      {
        won(user, compu);
        printf("Computer Won\n");
      }
    }
  }
  return 0;
}