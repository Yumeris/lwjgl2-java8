/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lwjgl_opengl_LinuxKeyboard */

#ifndef _Included_org_lwjgl_opengl_LinuxKeyboard
#define _Included_org_lwjgl_opengl_LinuxKeyboard
#ifdef __cplusplus
extern "C" {
#endif
#undef org_lwjgl_opengl_LinuxKeyboard_LockMapIndex
#define org_lwjgl_opengl_LinuxKeyboard_LockMapIndex 1L
#undef org_lwjgl_opengl_LinuxKeyboard_NoSymbol
#define org_lwjgl_opengl_LinuxKeyboard_NoSymbol 0LL
#undef org_lwjgl_opengl_LinuxKeyboard_ShiftMask
#define org_lwjgl_opengl_LinuxKeyboard_ShiftMask 1LL
#undef org_lwjgl_opengl_LinuxKeyboard_LockMask
#define org_lwjgl_opengl_LinuxKeyboard_LockMask 2LL
#undef org_lwjgl_opengl_LinuxKeyboard_XLookupChars
#define org_lwjgl_opengl_LinuxKeyboard_XLookupChars 2L
#undef org_lwjgl_opengl_LinuxKeyboard_XLookupBoth
#define org_lwjgl_opengl_LinuxKeyboard_XLookupBoth 4L
#undef org_lwjgl_opengl_LinuxKeyboard_KEYBOARD_BUFFER_SIZE
#define org_lwjgl_opengl_LinuxKeyboard_KEYBOARD_BUFFER_SIZE 50L
/*
 * Class:     org_lwjgl_opengl_LinuxKeyboard
 * Method:    getModifierMapping
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_LinuxKeyboard_getModifierMapping
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_lwjgl_opengl_LinuxKeyboard
 * Method:    freeModifierMapping
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_LinuxKeyboard_freeModifierMapping
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_lwjgl_opengl_LinuxKeyboard
 * Method:    getMaxKeyPerMod
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_LinuxKeyboard_getMaxKeyPerMod
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_lwjgl_opengl_LinuxKeyboard
 * Method:    lookupModifierMap
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_LinuxKeyboard_lookupModifierMap
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_lwjgl_opengl_LinuxKeyboard
 * Method:    keycodeToKeySym
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_LinuxKeyboard_keycodeToKeySym
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_lwjgl_opengl_LinuxKeyboard
 * Method:    openIM
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_LinuxKeyboard_openIM
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_lwjgl_opengl_LinuxKeyboard
 * Method:    createIC
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_LinuxKeyboard_createIC
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_lwjgl_opengl_LinuxKeyboard
 * Method:    setupIMEventMask
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_LinuxKeyboard_setupIMEventMask
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_lwjgl_opengl_LinuxKeyboard
 * Method:    allocateComposeStatus
 * Signature: ()Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_lwjgl_opengl_LinuxKeyboard_allocateComposeStatus
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opengl_LinuxKeyboard
 * Method:    nSetDetectableKeyRepeat
 * Signature: (JZ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_LinuxKeyboard_nSetDetectableKeyRepeat
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     org_lwjgl_opengl_LinuxKeyboard
 * Method:    destroyIC
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_LinuxKeyboard_destroyIC
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_lwjgl_opengl_LinuxKeyboard
 * Method:    closeIM
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_LinuxKeyboard_closeIM
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_lwjgl_opengl_LinuxKeyboard
 * Method:    lookupString
 * Signature: (JLjava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_LinuxKeyboard_lookupString
  (JNIEnv *, jclass, jlong, jobject, jobject);

/*
 * Class:     org_lwjgl_opengl_LinuxKeyboard
 * Method:    utf8LookupString
 * Signature: (JJLjava/nio/ByteBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_LinuxKeyboard_utf8LookupString
  (JNIEnv *, jclass, jlong, jlong, jobject, jint, jint);

/*
 * Class:     org_lwjgl_opengl_LinuxKeyboard
 * Method:    lookupKeysym
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_LinuxKeyboard_lookupKeysym
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_lwjgl_opengl_LinuxKeyboard
 * Method:    toUpper
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_LinuxKeyboard_toUpper
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
