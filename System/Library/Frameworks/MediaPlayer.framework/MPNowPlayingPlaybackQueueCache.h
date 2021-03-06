/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSMutableDictionary;

@interface MPNowPlayingPlaybackQueueCache : NSObject {

	NSMutableSet* _items;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _changedItems;
	BOOL _coalescingUpdates;

}
-(void)dealloc;
-(void)invalidate;
-(id)initWithQueue:(id)arg1 ;
-(void)addItems:(id)arg1 ;
-(void)_contentItemChanged:(id)arg1 ;
-(void)_scheduleContentItemChangedNotification:(id)arg1 ;
-(void)_pushContentItemChangedNotification;
@end

