#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *in, *out;
	in = fopen("test.txt", "r");
	if(in == NULL)
		printf("Error opening input file!");
	else
	{
		out = fopen("best.txt", "w");
		if(in == NULL)
			printf("Error opening output!");
		else
		{
			char ch;
			int count = 0;
			while((ch = getc(in)) != EOF) // fscanf(in, "%c", &ch);
			{
				if(tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u')
					count++;
			}
			fprintf(out, "%d", count);
			fclose(out);
		}		
		fclose(in);
	}
}