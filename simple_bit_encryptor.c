#include <stdio.h>
#include <string.h>
/*
This code is a template to be used in creating cyber security challenges
Just replace the encryption code with your algorithm
*/
int main(void)
{
     /*
    This function encrypts a plaintext message and
    saves the cipher text to a text file to be used later on
    */
    char message[62] = "pecan{Remember_to_protect_the_memory_allocation_in_your_work!}"; //62
    char key[1] = "a";
    char cipher[62] = "pecan{Remember_to_protect_the_memory_allocation_in_your_work!}";
    int count = 0;
    for (count = 0; count < 62; count = count + 1){
        // printf("count: %d", count);
        cipher[count] = (message[count] ^ key[0]);
        // printf("cipher: %c, message: %c", cipher[count], message[count]);
    }
    // printf("Cipher: %s", cipher);
    FILE *file_pointer;
    file_pointer = fopen("bitwise_text.txt","wb");
    fwrite(&cipher, sizeof(cipher), 1, file_pointer);
    fclose(file_pointer);
    return 0;
}
