/* DO NOT EDIT THIS FILE - it is machine generated */

#include <jni.h>

#ifndef __com_mymobkit_audio_codec_SpeexCodec__
#define __com_mymobkit_audio_codec_SpeexCodec__

#ifdef __cplusplus
extern "C"
{
#endif

JNIEXPORT jint JNICALL Java_com_mymobkit_audio_codec_SpeexCodec_openSpeex (JNIEnv *env, jobject);
JNIEXPORT void JNICALL Java_com_mymobkit_audio_codec_SpeexCodec_closeSpeex (JNIEnv *env, jobject);
JNIEXPORT jint JNICALL Java_com_mymobkit_audio_codec_SpeexCodec_decode (JNIEnv *env, jobject, jbyteArray, jshortArray, jint);
JNIEXPORT jint JNICALL Java_com_mymobkit_audio_codec_SpeexCodec_encode (JNIEnv *env, jobject, jshortArray, jbyteArray, jint);

#ifdef __cplusplus
}
#endif

#endif /* __com_mymobkit_audio_codec_SpeexCodec__ */