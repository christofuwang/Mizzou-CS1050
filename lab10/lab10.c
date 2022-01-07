/*****************************************************************************
 *   Chris Wang
 *   Lab 10
 *   CS1050
 *   Nov 5, 2021
 *   Fall 2021 Semester
 *   Pawprint: cwcn6
 *****************************************************************************/

// includes
#include <stdio.h>
#include <ctype.h>

// Symbolic Constants
#define CLEARTEXT \
"Haven't felt right in a week\n"\
"And I'm thinning out\n"\
"And it hurts bad\n"\
"I gotta get back\n"\
"\n"\
"Hot head and dreamless sleep\n"\
"I could just slip down\n"\
"And on the wrong track\n"\
"I gotta get back\n"\
"\n"\
"I wanna spend the entire year\n"\
"Just face down\n"\
"And on my own time\n"\
"I wanna waste mine\n"\
"\n"\
"And spend the rest of it asking myself\n"\
"\"Is this who you are?\"\n"\
"And I don't know\n"\
"It just feels gross\n"\
"\n"\
"I don't think there's anything wrong\n"\
"I don't think there's anything wrong\n"\
"And I don't think there's anything wrong\n"\
"I don't think there's anything wrong\n"\
"\n"\
"Sunlight on the back of my arms\n"\
"Just thins me out\n"\
"To a different time\n"\
"I wanna waste mine\n"\
"\"\\\?\n\n\t\t- Snail Mail"



// Prototypes
void Encrypt(const char * in, char * out, int displacement);



// Main
int main(void)
{
        char test1[1028];
        char test2[1028];
  
        printf("****************************\n* Cleartext:               *\n");
        printf("%s\n",CLEARTEXT);
        printf("****************************\n\n");
  
        Encrypt(CLEARTEXT,test1,99);
        printf("****************************\n* CipherText using 99:     *\n");
        printf("%s\n",test1);
        printf("****************************\n\n");
  
        Encrypt(test1,test2,-99);
        printf("****************************\n* Decrypted CipherText:    *\n");
        printf("%s\n",test2);
        printf("****************************\n\n");
}

// Function implementations
void Encrypt(const char * in, char * out, int displacement)
{
        for(int x = 0; in[x]!='\0';x++){
                if(isalpha(in[x])==0){
                        out[x] = in[x];
                        continue;
                }
                if(displacement>0){
                        if((isupper(in[x]))!=0){
                                if(in[x]+displacement%26>90){
                                        if((in[x]+displacement%26)>90){
                                                out[x] = ((in[x])+(displacement%26))%90+64;
                                                continue;
                                        }
                                        out[x] = in[x]+displacement%26;
                                }
                        }


                        if((islower(in[x]))!=0){
                                if(in[x]+displacement%26>122){
                                        if((in[x]+displacement%26)>122){
                                                out[x] = ((in[x])+(displacement%26))%122+96;
                                                continue;
                                        }
                                        out[x] = in[x]+displacement%26;
                                }                                                                
                        }
                }

                if (displacement<0){
                        if((islower(in[x]))!=0){
                                if(in[x]+(displacement)%26<97){
                                        out[x] = (123-(97-(in[x]+(displacement%26))));
                                        continue;
                                  }

                        }
                }

                if((isupper(in[x]))!=0){
                        if(in[x]+(displacement)%26<64){
                                out[x] = (91-(65-(in[x]-(-displacement%26))));
                                continue;
                        }
                }
                out[x] = in[x]+displacement%26;


        }
}
