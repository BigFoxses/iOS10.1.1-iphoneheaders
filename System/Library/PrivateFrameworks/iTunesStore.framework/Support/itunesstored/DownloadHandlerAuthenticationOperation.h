/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/DownloadHandlerObserver.h>

@protocol OS_dispatch_semaphore;
@class NSObject, DownloadSessionProperties, NSURLCredential, NSString;

@interface DownloadHandlerAuthenticationOperation : ISOperation <DownloadHandlerObserver> {

	/*^block*/id _outputBlock;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	long long _sessionID;
	DownloadSessionProperties* _sessionProperties;
	long long _state;
	NSURLCredential* _urlCredential;

}

@property (readonly) DownloadSessionProperties * sessionProperties; 
@property (copy) id outputBlock; 
@property (readonly) long long downloadSessionState; 
@property (readonly) NSURLCredential * URLCredential; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadHandlerManager:(id)arg1 sessionsDidChange:(id)arg2 ;
-(DownloadSessionProperties *)sessionProperties;
-(id)initWithSessionProperties:(id)arg1 ;
-(NSURLCredential *)URLCredential;
-(id)_openSession;
-(long long)downloadSessionState;
-(void)_setURLCredential:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)run;
-(void)_setState:(long long)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
@end
