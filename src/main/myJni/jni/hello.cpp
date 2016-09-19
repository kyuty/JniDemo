//
// Created by kyuty on 2016/3/22.
//

#include "com_kyuty_jnidemo_MyNDK.h"

JNIEXPORT jstring JNICALL Java_com_kyuty_jnidemo_MyNDK_getStringFromNative
        (JNIEnv * env, jobject)
{
    return env->NewStringUTF("My First NDK Demo!!!");
}
