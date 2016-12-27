/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSNumber, NSDate, NSOperationQueue;

@interface MediaContentTasteUpdateController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSNumber* _currentAccountUniqueID;
	int _didChangeNotifyToken;
	NSDate* _expirationDate;
	BOOL _hasValidDidChangeNotifyToken;
	NSOperationQueue* _operationQueue;

}
+(id)sharedController;
-(void)_addBackgroundRefreshTask;
-(void)_sendChangeNotificationWithRevisionID:(unsigned long long)arg1 ;
-(void)updateMediaContentTasteWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
@end
