/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAEGradient : PAEGeneratorDefaultBase {

	int _currentMethod;

}
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInfo:(SCD_Struct_PA46*)arg2 ;
-(BOOL)frameSetup:(SCD_Struct_PA46*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(BOOL)setGradientStartEnd:(double)arg1 startY:(double)arg2 endX:(double)arg3 endY:(double)arg4 toParm:(unsigned)arg5 atTime:(/*function pointer*/void**)arg6 ;
-(BOOL)addGradientPositionedWithName:(id)arg1 parmId:(unsigned)arg2 parmFlags:(unsigned)arg3 ;
-(BOOL)initPAEGradientWithHeight:(id)arg1 ;
-(BOOL)getGradientStartEnd:(double*)arg1 startY:(double*)arg2 endX:(double*)arg3 endY:(double*)arg4 type:(int*)arg5 fromParm:(unsigned)arg6 atTime:(/*function pointer*/void**)arg7 ;
-(BOOL)addParameters;
-(BOOL)parameterChanged:(unsigned)arg1 ;
@end
