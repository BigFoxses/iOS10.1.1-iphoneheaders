/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineReflection.h>

@class NSArray, NSDictionary;

@interface MTLComputePipelineReflectionInternal : MTLComputePipelineReflection {

	NSArray* _arguments;
	NSArray* _builtInArguments;
	NSDictionary* _performanceStatistics;
	SCD_Struct_MT11 _flags;

}
-(void)setPerformanceStatistics:(id)arg1 ;
-(id)initWithSerializedData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(SCD_Struct_MT11)arg4 ;
-(id)performanceStatistics;
-(id)builtInArguments;
-(SCD_Struct_MT11)usageFlags;
-(void)dealloc;
-(id)description;
-(id)arguments;
@end
