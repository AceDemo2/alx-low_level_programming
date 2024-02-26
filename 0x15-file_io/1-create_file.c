int create_file(const char *filename, char *text_content)
{
	int i;

	i = open(filename, 
