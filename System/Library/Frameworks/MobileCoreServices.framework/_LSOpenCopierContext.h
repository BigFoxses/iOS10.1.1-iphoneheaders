/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSError;

@interface _LSOpenCopierContext : NSObject {

	int _callbackType;
	NSURL* _destURL;
	NSError* _error;

}

@property (assign,nonatomic) int callbackType;              //@synthesize callbackType=_callbackType - In the implementation block
@property (nonatomic,retain) NSURL * destURL;               //@synthesize destURL=_destURL - In the implementation block
@property (nonatomic,retain) NSError * error;               //@synthesize error=_error - In the implementation block
-(int)callbackType;
-(void)setCallbackType:(int)arg1 ;
-(NSURL *)destURL;
-(void)setDestURL:(NSURL *)arg1 ;
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
