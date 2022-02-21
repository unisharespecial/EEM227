#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int checkmail(char arr[])
{
	FILE *checker;
	char temp[100];
	int flag=0;
	
	checker = fopen("data.txt","r");	
	while(!feof(checker))
	{
		fscanf(checker,"%s\n",temp);
		if( strcmp(temp,arr) == 0)
		{
			flag=1;
			break;
		}
		else
			flag=0;
	}
	fclose(checker);
	return flag;
	
}


int main()
{
	FILE *fread;
	FILE *fwrite;
	char mail[100];
	
	fread = fopen("maillist.txt","r");
	while(!feof(fread))
	{
		fscanf(fread,"%s\n",&mail);
		if( checkmail(mail) == 0 )
		{
			fwrite = fopen("data.txt","a");
			fprintf(fwrite,"%s\n",mail);
			fclose(fwrite);
		}		
	}
	fclose(fread);
	
return 0;
}
