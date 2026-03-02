# include <stdio.h>
# include <ctype.h>

int main(){
    FILE *source *target;
    char ch;

    // open source file in read mode 
    source=fopen("source.txt","r");

    if(source == NULL){
        printf("Error opening source file .\n")
        return 1;
    }

    // open target file in read mode 
    target=fopen("target.txt","r");

    if(target == NULL){
        printf("Error opening target fille .\n");
        return 1 

    
    }

    // read character from source and write uppercase to the target
    while((ch=fgetc(source)) != EOF){
        fputc(toupper(ch), target);

    }

    // close files 
    fclose(source);
    fclose(target);

}