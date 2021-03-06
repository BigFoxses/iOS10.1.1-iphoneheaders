/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsComputePipelineState.h>

@protocol MTLFunction;
@class MTLComputePipelineDescriptor, MTLComputePipelineReflection, NSArray;

@interface MTLDebugComputePipelineState : MTLToolsComputePipelineState {

	id<MTLFunction> _function;
	MTLComputePipelineDescriptor* _descriptor;
	MTLComputePipelineReflection* _reflection;
	NSArray* _imageFilterFunctions;
	SCD_Struct_MT9* _imageFilterFunctionInfo;

}

@property (nonatomic,readonly) id<MTLFunction> function;                               //@synthesize function=_function - In the implementation block
@property (nonatomic,readonly) MTLComputePipelineDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) MTLComputePipelineReflection * reflection;              //@synthesize reflection=_reflection - In the implementation block
@property (nonatomic,readonly) NSArray * imageFilterFunctions;                         //@synthesize imageFilterFunctions=_imageFilterFunctions - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MT9* imageFilterFunctionInfo;                //@synthesize imageFilterFunctionInfo=_imageFilterFunctionInfo - In the implementation block
-(void)dealloc;
-(id)description;
-(MTLComputePipelineDescriptor *)descriptor;
-(id<MTLFunction>)function;
-(id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4 ;
-(void)setImageFilterFunctions:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT9*)arg2 ;
-(NSArray *)imageFilterFunctions;
-(SCD_Struct_MT9*)imageFilterFunctionInfo;
-(id)getParameter:(id)arg1 ;
-(MTLComputePipelineReflection *)reflection;
@end

