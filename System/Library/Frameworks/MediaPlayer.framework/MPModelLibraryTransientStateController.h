/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSMutableArray;

@interface MPModelLibraryTransientStateController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _registeredTransientState;

}
+(id)sharedDeviceLibraryController;
-(id)init;
-(void)addOperation:(id)arg1 ;
-(long long)transientKeepLocalStateForModelObject:(id)arg1 ;
-(id)registerTransientAddState:(long long)arg1 forModelObjects:(id)arg2 relatedModelObjects:(id)arg3 ;
-(void)unregisterTransientState:(id)arg1 ;
-(id)registerTransientKeepLocalState:(long long)arg1 forModelObjects:(id)arg2 relatedModelObjects:(id)arg3 ;
-(long long)transientAddStateForModelObject:(id)arg1 ;
-(void)performDeleteEntityChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 ;
-(void)performLibraryImportChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 ;
-(void)performKeepLocalChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 ;
@end

