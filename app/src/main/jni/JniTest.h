//
// Created by DengJf on 2017/10/10.
//

#ifndef JNITEST_JNITEST_H
#define JNITEST_JNITEST_H

#endif

#include <jni.h>

#ifndef _Included_com_jnidemo_JniUntil
#define _Included_com_jnidemo_JniUntil
#ifdef __cplusplus
extern "C" {
#endif
JNIEXPORT jstring JNICALL Java_com_jnidemo_JniUntil_getString
        (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif