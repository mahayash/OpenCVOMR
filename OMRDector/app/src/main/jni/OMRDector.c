#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_ness_omrdector_MainActivity_getMsgFromJni(JNIEnv *env, jobject instance) {

    // TODO
    return (*env)->NewStringUTF(env, "Hello world of NDK");
}