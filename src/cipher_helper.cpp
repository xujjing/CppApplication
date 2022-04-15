//
// Created by Phoenix on 2017/6/25.
//
#include <string.h>
#include <stdio.h>
#include <openssl/md5.h>
#include "cipher_helper.h"


int md5(const char* src, size_t src_len, char* result) {

    char buff[3] = {'\0'};
    char hex[33] = {'\0'};
    unsigned char digest[MD5_DIGEST_LENGTH];

//    MD5((const unsigned char *) src, src_Len, digest);

    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, src, src_len);
    MD5_Final(digest, &ctx);

    strcpy(hex, "");
    for (int i = 0; i != sizeof(digest); i++) {
        sprintf(buff, "%02x", digest[i]);
        strcat(hex, buff);
    }

    return sprintf(result, "%s", hex);
}
