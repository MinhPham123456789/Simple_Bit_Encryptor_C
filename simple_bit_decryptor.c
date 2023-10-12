#include <stdio.h>
#include <string.h>
/*
This code is a template to be used in creating cyber security challenges
Just replace the decryption code with your algorithm
*/
int decoder(){
    /*
    This function reads the cipher in a text file, decrypts the cipher, and
    print out the plaintext
    */
    char cipher[62];
    FILE *file_pointer;
    file_pointer = fopen("bitwise_text.txt","rb");
    fread(&cipher, sizeof(cipher), 1, file_pointer);

    char key[1] = "a";
    int count = 0;
    for (count = 0; count < 62; count = count + 1){
        // printf("count: %d", count);
        cipher[count] = (cipher[count] ^ key[0]);
        // printf("cipher: %c, message: %c", cipher[count], message[count]);
    }
    printf("Cipher: %s", cipher);
    fclose(file_pointer);
    return 0;
}

int main(){
    decoder();
    return 0;
}
