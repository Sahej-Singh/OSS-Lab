# include <stdio.h>
# include <string.h>
   
int main( )
{
    FILE *filePointer ;
    char dataToBeWritten[50] = "test string";
    filePointer = fopen("temp", "w") ;
    if ( filePointer == NULL )
    {
        printf( "file can't be opened" ) ;
    }
    else
    {
        printf("file opened\n") ;
        if ( strlen (  dataToBeWritten  ) > 0 )
        {
            fputs(dataToBeWritten, filePointer) ;   
            fputs("\n", filePointer) ;
        }
        fclose(filePointer) ;
        printf("Data written in temp\n");
    }
    return 0;        
}
