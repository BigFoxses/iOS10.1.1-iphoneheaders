/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMFaceDetectionCommand : CAMCaptureCommand {

	BOOL __faceDetectionEnabled;
	BOOL __usesFacesForImageProcessing;

}

@property (getter=_isFaceDetectionEnabled,nonatomic,readonly) BOOL _faceDetectionEnabled;              //@synthesize _faceDetectionEnabled=__faceDetectionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL _usesFacesForImageProcessing;                                      //@synthesize _usesFacesForImageProcessing=__usesFacesForImageProcessing - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithFaceDetectionEnabled:(BOOL)arg1 usesFacesForImageProcessing:(BOOL)arg2 ;
-(BOOL)_isFaceDetectionEnabled;
-(BOOL)_usesFacesForImageProcessing;
-(id)initWithFaceDetectionEnabled:(BOOL)arg1 ;
@end

