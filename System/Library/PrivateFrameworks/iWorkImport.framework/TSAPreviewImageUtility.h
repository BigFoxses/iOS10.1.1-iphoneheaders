/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSAPreviewImageUtility : NSObject
+(id)scaleImage:(CGImageRef)arg1 toSize:(CGSize)arg2 scale:(double)arg3 ;
+(BOOL)imageIsOpaque:(CGImageRef)arg1 ;
+(void)drawInContext:(CGContextRef)arg1 bounds:(CGRect)arg2 image:(CGImageRef)arg3 imageSize:(CGSize)arg4 scaledSize:(CGSize)arg5 scale:(double)arg6 flip:(BOOL)arg7 ;
+(CGImageRef)newPrerenderedImageFromImage:(CGImageRef)arg1 preserveAlpha:(BOOL)arg2 ;
+(CGImageRef)newPrerenderedImageFromImage:(CGImageRef)arg1 ;
@end

