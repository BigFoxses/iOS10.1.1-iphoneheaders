/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVML-Structs.h>
#import <CVML/CVMLRequestHandler.h>

@class CVMLImageBuffer, NSDictionary;

@interface CVMLImageRequestHandler : CVMLRequestHandler {

	CVMLImageBuffer* _imageBuffer;
	NSDictionary* _properties;

}

@property (readonly) CVMLImageBuffer * imageBuffer;              //@synthesize imageBuffer=_imageBuffer - In the implementation block
@property (readonly) NSDictionary * properties;                  //@synthesize properties=_properties - In the implementation block
+(id)handlerForBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
+(id)handlerForCGImage:(CGImageRef)arg1 options:(id)arg2 ;
+(id)handlerForCIImage:(id)arg1 options:(id)arg2 ;
+(id)handlerForURL:(id)arg1 options:(id)arg2 ;
+(id)handlerForData:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(id)initWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(NSDictionary *)properties;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(id)initWithBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)initWithCIImage:(id)arg1 options:(id)arg2 ;
-(void)releaseOriginalBuffer;
-(CVMLImageBuffer *)imageBuffer;
-(BOOL)useFullImageBufferForFaces:(id)arg1 ;
@end
