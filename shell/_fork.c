int _fork(char **new_argv)
{
    pid_t child = 0;
    int status = 0, i = 0;
    
    child = fork();
    if (child == -1)
    {
        perror("Fork failed");
        exit(EXIT_FAILURE);
    }
    
    if (child == 0)
    {
        execmd(new_argv);
        return (-1);
    }
    else
    {
        wait(&status);
        for(i = 0; new_argv[i] != NULL; i++)
    		{
    			free(new_argv[i]);
    		}
		    free(new_argv);
    }
    return (0);
}
