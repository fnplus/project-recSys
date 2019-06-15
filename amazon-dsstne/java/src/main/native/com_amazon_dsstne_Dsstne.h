/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_amazon_dsstne_Dsstne */

#ifndef _Included_com_amazon_dsstne_Dsstne
#define _Included_com_amazon_dsstne_Dsstne
#ifdef __cplusplus
extern "C" {
#endif
#undef com_amazon_dsstne_Dsstne_NULLPTR
#define com_amazon_dsstne_Dsstne_NULLPTR 0LL
/*
 * Class:     com_amazon_dsstne_Dsstne
 * Method:    load
 * Signature: (Ljava/lang/String;II)J
 */
JNIEXPORT jlong JNICALL Java_com_amazon_dsstne_Dsstne_load
  (JNIEnv *, jclass, jstring, jint, jint);

/*
 * Class:     com_amazon_dsstne_Dsstne
 * Method:    load_datasets
 * Signature: (J[Lcom/amazon/dsstne/NNDataSet;)V
 */
JNIEXPORT void JNICALL Java_com_amazon_dsstne_Dsstne_load_1datasets
  (JNIEnv *, jclass, jlong, jobjectArray);

/*
 * Class:     com_amazon_dsstne_Dsstne
 * Method:    shutdown
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_amazon_dsstne_Dsstne_shutdown
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_amazon_dsstne_Dsstne
 * Method:    get_layers
 * Signature: (JI)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_amazon_dsstne_Dsstne_get_1layers
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_amazon_dsstne_Dsstne
 * Method:    predict
 * Signature: (JI[Lcom/amazon/dsstne/NNDataSet;[Lcom/amazon/dsstne/TopKOutput;)V
 */
JNIEXPORT void JNICALL Java_com_amazon_dsstne_Dsstne_predict
  (JNIEnv *, jclass, jlong, jint, jobjectArray, jobjectArray);

#ifdef __cplusplus
}
#endif
#endif
