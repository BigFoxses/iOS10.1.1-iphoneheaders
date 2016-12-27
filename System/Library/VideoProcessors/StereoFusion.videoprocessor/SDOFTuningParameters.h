/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:44:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/VideoProcessors/StereoFusion.videoprocessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StereoFusion.videoprocessor/StereoFusion.videoprocessor-Structs.h>
@interface SDOFTuningParameters : NSObject {

	float _regPyrDepth_basicDepth;
	float _regPyrDepth_ROIPad;
	float _regPyrDepth_shiftMapSeedValue;
	float _keypointsDetectionThreshold;
	float _defaultFocalLengthTeleMicrometers;
	float _defaultFocalLengthTeleMaxDeviationMicrometers;
	float _defaultFocalLengthWideMicrometers;
	float _defaultFocalLengthWideMaxDeviationMicrometers;
	rendering_config_params _renderingConfig;
	bleeding_equation_params _renderingBleedingConfig;
	AdaptiveCorrectionConfig _adaptiveCorrectionConfig;
	simple_lens_model_params _simpleLensModelConfig;

}

@property (readonly) float regPyrDepth_basicDepth;                                     //@synthesize regPyrDepth_basicDepth=_regPyrDepth_basicDepth - In the implementation block
@property (readonly) float regPyrDepth_ROIPad;                                         //@synthesize regPyrDepth_ROIPad=_regPyrDepth_ROIPad - In the implementation block
@property (readonly) float regPyrDepth_shiftMapSeedValue;                              //@synthesize regPyrDepth_shiftMapSeedValue=_regPyrDepth_shiftMapSeedValue - In the implementation block
@property (readonly) float keypointsDetectionThreshold;                                //@synthesize keypointsDetectionThreshold=_keypointsDetectionThreshold - In the implementation block
@property (readonly) float defaultFocalLengthTeleMicrometers;                          //@synthesize defaultFocalLengthTeleMicrometers=_defaultFocalLengthTeleMicrometers - In the implementation block
@property (readonly) float defaultFocalLengthTeleMaxDeviationMicrometers;              //@synthesize defaultFocalLengthTeleMaxDeviationMicrometers=_defaultFocalLengthTeleMaxDeviationMicrometers - In the implementation block
@property (readonly) float defaultFocalLengthWideMicrometers;                          //@synthesize defaultFocalLengthWideMicrometers=_defaultFocalLengthWideMicrometers - In the implementation block
@property (readonly) float defaultFocalLengthWideMaxDeviationMicrometers;              //@synthesize defaultFocalLengthWideMaxDeviationMicrometers=_defaultFocalLengthWideMaxDeviationMicrometers - In the implementation block
@property (readonly) simple_lens_model_params simpleLensModelConfig;                   //@synthesize simpleLensModelConfig=_simpleLensModelConfig - In the implementation block
@property (readonly) rendering_config_params renderingConfig;                          //@synthesize renderingConfig=_renderingConfig - In the implementation block
@property (readonly) bleeding_equation_params renderingBleedingConfig;                 //@synthesize renderingBleedingConfig=_renderingBleedingConfig - In the implementation block
@property (readonly) AdaptiveCorrectionConfig adaptiveCorrectionConfig;                //@synthesize adaptiveCorrectionConfig=_adaptiveCorrectionConfig - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(float)keypointsDetectionThreshold;
-(const AdaptiveCorrectionConfig*)getAdaptiveCorrectionConfigPtr;
-(BOOL)readAdaptiveCorrectionConfig:(id)arg1 ;
-(float)defaultFocalLengthTeleMicrometers;
-(float)defaultFocalLengthTeleMaxDeviationMicrometers;
-(float)defaultFocalLengthWideMicrometers;
-(float)defaultFocalLengthWideMaxDeviationMicrometers;
-(AdaptiveCorrectionConfig)adaptiveCorrectionConfig;
-(BOOL)readSLMConfig:(id)arg1 ;
-(BOOL)readRenderingConfig:(id)arg1 ;
-(rendering_config_params)renderingConfig;
-(bleeding_equation_params)renderingBleedingConfig;
-(simple_lens_model_params)simpleLensModelConfig;
-(float)regPyrDepth_basicDepth;
-(float)regPyrDepth_ROIPad;
-(float)regPyrDepth_shiftMapSeedValue;
@end
