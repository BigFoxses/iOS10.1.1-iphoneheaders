/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@protocol NPSDomainAccessorFilePresenterDelegate, OS_dispatch_queue;
@class NSURL, NSOperationQueue, NSObject, NSString;

@interface NPSDomainAccessorFilePresenter : NSObject <NSFilePresenter> {

	BOOL _current;
	NSURL* _domainURL;
	id<NPSDomainAccessorFilePresenterDelegate> _delegate;
	NSOperationQueue* _presenterOperationQueue;
	NSObject*<OS_dispatch_queue> _presenterUnderlyingQueue;

}

@property (nonatomic,retain) NSURL * domainURL;                                                         //@synthesize domainURL=_domainURL - In the implementation block
@property (nonatomic,retain) NSOperationQueue * presenterOperationQueue;                                //@synthesize presenterOperationQueue=_presenterOperationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> presenterUnderlyingQueue;                     //@synthesize presenterUnderlyingQueue=_presenterUnderlyingQueue - In the implementation block
@property (assign,getter=isCurrent,nonatomic) BOOL current;                                             //@synthesize current=_current - In the implementation block
@property (nonatomic,__weak,readonly) id<NPSDomainAccessorFilePresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
-(BOOL)presentedItemNeedsWatching;
-(void)dealloc;
-(id<NPSDomainAccessorFilePresenterDelegate>)delegate;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)setCurrent:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 domainURL:(id)arg2 ;
-(id)synchronizeForReadingOnly:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(NSURL *)domainURL;
-(void)setDomainURL:(NSURL *)arg1 ;
-(NSOperationQueue *)presenterOperationQueue;
-(void)setPresenterOperationQueue:(NSOperationQueue *)arg1 ;
-(NSObject*<OS_dispatch_queue>)presenterUnderlyingQueue;
-(void)setPresenterUnderlyingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isCurrent;
@end

