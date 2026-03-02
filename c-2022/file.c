# include <stdio.h>
# include <ctype.h>

int main(){
    FILE *source , *target
    char ch 

    // open the source file 

    source=fopen('source.txt','r')

    if(source==NULL){
        printf("Error opening source file")
        return 1 

    }

    // open the target file 

    target=fopen("target.txt",'w')

    if(target=-NULL){
        printf("Error opening the target file")
        return 1 
    }

    while((ch=fgetc(source) != EOF)){
        fputc(toupper(ch),target)
    }

    printf("file copied succsesfully in uppercase")

    fclose(source)
    fclose(target)

    return 0;
}

