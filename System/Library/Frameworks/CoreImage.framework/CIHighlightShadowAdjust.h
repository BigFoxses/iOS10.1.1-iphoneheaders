/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, NSNumber;

@interface CIHighlightShadowAdjust : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSNumber* inputRadius;
	NSNumber* inputShadowAmount;
	NSNumber* inputHighlightAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputShadowAmount; 
@property (nonatomic,retain) NSNumber * inputHighlightAmount; 
+(id)customAttributes;
-(BOOL)_isIdentity;
-(NSNumber *)inputShadowAmount;
-(int)_defaultVersion;
-(int)_maxVersion;
-(id)_kernelSnoB_v0;
-(id)_kernelSHnoB_v0;
-(id)_kernelSH_v0;
-(id)_kernelSHnoB_v1;
-(id)_kernelSH_v1;
-(id)_kernelSHnoB_v2;
-(id)_kernelSH_v2;
-(void)setInputShadowAmount:(NSNumber *)arg1 ;
-(void)setInputHighlightAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputHighlightAmount;
-(id)outputImage;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(CIImage *)inputImage;
-(void)setDefaults;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputImage:(CIImage *)arg1 ;
@end

