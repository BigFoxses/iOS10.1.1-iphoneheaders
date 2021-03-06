/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SyncBundles/MusicLibrary.syncBundle/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/ATSessionTask.h>

@protocol OS_dispatch_queue;
@class NSObject, ML3MusicLibrary;

@interface MLSyncKeepLocalSessionTask : ATSessionTask {

	NSObject*<OS_dispatch_queue> _queue;
	ML3MusicLibrary* _library;
	/*^block*/id _completionCallback;

}
-(void)_cancelAllTracksFromLibrary:(id)arg1 withPersistentIDs:(id)arg2 ;
-(id)initWithLibrary:(id)arg1 queue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_assetWithPersistentID:(long long)arg1 ;
-(id)_assetsWithPersistentIDs:(id)arg1 ;
-(id)_assetsFromTrackPersistentIds:(id)arg1 andProperties:(id)arg2 inForeground:(BOOL)arg3 ;
-(void)cancel;
-(void)start;
-(void)_finishTaskWithError:(id)arg1 ;
@end

