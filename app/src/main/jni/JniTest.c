//
// Created by DengJf on 2017/10/10.
//
#include "JniTest.h"

JNIEXPORT jstring JNICALL Java_com_jnidemo_JniUntil_getString
        (JNIEnv *env, jobject obj){
    return (*env)->NewStringUTF(env,"努力学习，天天向上");
}
