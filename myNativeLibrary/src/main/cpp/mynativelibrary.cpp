#include <jni.h>
#include <string>
#include "Calculator.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_ahtisham_mynativelibrary_NativeLib_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_ahtisham_mynativelibrary_NativeLib_Add(JNIEnv *env, jobject thiz, jint num1, jint num2) {
    return Add(num1,num2);
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_ahtisham_mynativelibrary_NativeLib_Substract(JNIEnv *env, jobject thiz, jint num1,
                                                      jint num2) {
    return Substract(num1,num2);
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_ahtisham_mynativelibrary_NativeLib_Multiple(JNIEnv *env, jobject thiz, jint num1,
                                                     jint num2) {
    return Multiple(num1,num2);
}