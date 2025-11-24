#include <stdio.h>
#include <unistd.h>

// fct  pour print un seul char 

 char print_character(char x) {
    write(1,&x,1);

}
// fct main 
int main () {
    char character = 's';
    print_character(character);
}
