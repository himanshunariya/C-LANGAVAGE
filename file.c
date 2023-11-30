#include <string>
int main()
{
    FILE *fp;
    fp=fopen("abc.txt", "w+");
  //fp=fopen("abc.txt", "a+");
  fprintf(fp,"YOU ARE HEAR\n");
  fputs("END OF C\n",fp);
  fputs("BY.....\n",fp);
  fclose(fp);

}