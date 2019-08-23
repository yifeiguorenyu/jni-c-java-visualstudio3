#include "ndk1_Simple3.h"
JNIEXPORT void JNICALL Java_ndk1_Simple3_changeage
(JNIEnv * env, jclass clazz) {
	jfieldID fieldID =(*env)->GetStaticFieldID(env, clazz, "age", "I");
	jint old_age =(*env)->GetStaticIntField(env, clazz, fieldID);
	old_age += 12;
	(*env)->SetStaticIntField(env, clazz, fieldID, old_age);

	




}