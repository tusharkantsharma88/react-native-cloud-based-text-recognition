
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNCloudBasedTextRecognitionSpec.h"

@interface CloudBasedTextRecognition : NSObject <NativeCloudBasedTextRecognitionSpec>
#else
#import <React/RCTBridgeModule.h>

@interface CloudBasedTextRecognition : NSObject <RCTBridgeModule>
#endif

@end
