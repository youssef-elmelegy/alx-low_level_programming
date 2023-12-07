#include <stdio.h>      // For printf
#include <stdlib.h>     // For malloc, free, exit, getenv, strdup
#include <string.h>     // For strcpy, strlen, strtok, strdup, strcat
#include <unistd.h>     // For fork, execve
#include <sys/types.h>  // For pid_t
#include <sys/wait.h>   // For wait
#include <sys/stat.h>   // For stat

char *get_loc(char *command){
    char *path, *path_copy, *path_token, *file_path;
    int command_length, directory_length;
    struct stat buffer;

    path = getenv("PATH");

    if (path){
        /* Duplicate the path string -> remember to free up memory for this because strdup allocates memory that needs to be freed*/ 
        path_copy = strdup(path);
        /* Get length of the command that was passed */
        command_length = strlen(command);

        /* Let's break down the path variable and get all the directories available*/
        path_token = strtok(path_copy, ":");

        while(path_token != NULL){
            /* Get the length of the directory*/
            directory_length = strlen(path_token);
            /* allocate memory for storing the command name together with the directory name */
            file_path = malloc(command_length + directory_length + 1); /* NB: we added 2 for the slash and null character we will introduce in the full command */
            /* to build the path for the command, let's copy the directory path and concatenate the command to it */
            strcpy(file_path, path_token);
            strcat(file_path, "/");
            strcat(file_path, command);
            strcat(file_path, "\0");

            /* let's test if this file path actually exists and return it if it does, otherwise try the next directory */
            if (stat(file_path, &buffer) == 0){
                /* return value of 0 means success implying that the file_path is valid*/

                /* free up allocated memory before returning your file_path */
                free(path_copy);

                return (file_path);
            }
            else{
                /* free up the file_path memory so we can check for another path*/
                free(file_path);
                path_token = strtok(NULL, ":");

            }

        }

        /* if we don't get any file_path that exists for the command, we return NULL but we need to free up memory for path_copy */ 
        free(path_copy);

        /* before we exit without luck, let's see if the command itself is a file_path that exists */
        if (stat(command, &buffer) == 0)
        {
            return (command);
        }


        return (NULL);

    }


    return (NULL);
}

void execmd(char **argv){
    char *command = NULL, *actual_command = NULL;

    if (argv){
        /* get the command */
        command = argv[0];

        /* generate the path to this command before passing it to execve */
        actual_command = get_loc(command);

        /* execute the actual command with execve */
        if (execve(actual_command, argv, NULL) == -1){
            perror("Error:");
        }
    }

}



int main(int ac, char **argv)
{
    (void)ac;
    
    char *prompt = "$ ";
    char *getin; char *c_getin;
    size_t length = 0 ;
    ssize_t num;
    char* token;
    int n_tokens = 0;
    char *var = " \n";
    pid_t child;
    int status;
    
    while(1)
    {
        printf("%s", prompt);
        
        num = getline(&getin, &length, stdin);
        if(num == EOF)
        {
            printf("Exiting shell....\n");
            return (-1);
        }
        // printf("%s", getin);
        c_getin = malloc(sizeof(char) * num+1);
        if(c_getin == NULL)
        {
            printf("err memory allocate ..");
            return (-1);
        }
        strcpy(c_getin, getin);
        // printf("%s", getin);
        // printf("%s", c_getin);
        token = strtok(getin, var);
        while(token != NULL)
        {
            n_tokens++;
            token = strtok(NULL, var);
        }
        // printf("%d\n", n_tokens);
        argv = malloc(sizeof(char *) * n_tokens);
        if(argv == NULL)
        {
            printf("err memory allocate ..");
            return (-1);
        }
        
    
        token = strtok(c_getin, var);
        int i;
        for(i = 0; token != NULL; i++)
        {
            argv[i] = malloc(sizeof(char) * strlen(token));
            strcpy(argv[i], token);
            token = strtok(NULL, var);
        }
        argv[i] = NULL;
    
        
        // for(i = 0; argv[i] != NULL; i++)
        // {
        //     printf("%s ", argv[i]);
        // }
        
        child = fork();
        if (child == -1) {
            perror("Fork failed");
            exit(EXIT_FAILURE);
        }
        
        if(child == 0)
        {
            execmd(argv);
            return (0);
        }
        else
        {
            wait(&status);
        }
     
        
    for(int i = 0; i <= n_tokens; i++ )
    {
	    free(argv[i]);
    }
    
    
    free(getin);
    free(c_getin);
    free(argv);
}
    return 0;
}

