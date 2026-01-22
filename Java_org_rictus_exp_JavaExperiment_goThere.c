#include "Java_org_rictus_exp_JavaExperiment_goThere.h"

/*
 * Class:     org_rictus_exp_JavaExperiment
 * Method:    goThere
 * Signature: (Lorg/rictus/exp/Callback;)V
 */
JNIEXPORT void JNICALL Java_org_rictus_exp_JavaExperiment_goThere
  (JNIEnv * env, jclass class, jobject andBackAgain) {
    prinf("we are in c now\n");
    jclass cls = (*env)->GetObjectClass(env, andBackAgain);
    jmethodID method = (*env)->GetMethodID(env, cls, "call", "()V");
    (*env)->CallVoidMethod(env, andBackAgain, method);

}
