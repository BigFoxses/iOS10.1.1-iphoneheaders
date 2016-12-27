/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class EKEventStore, PCPersistentTimer, NSDate, NSTimer, NSObject, NSArray, NSMutableSet;

@interface _EKNotificationMonitor : NSObject {

	EKEventStore* _eventStore;
	/*^block*/id _eventStoreGetter;
	BOOL _running;
	PCPersistentTimer* _timer;
	NSDate* _nextFireTime;
	NSTimer* _syncTimer;
	BOOL _pendingChanges;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _timerQueue;
	unsigned long long _lastEventCount;
	unsigned long long _lastReminderCount;
	NSArray* _eventNotificationReferences;
	NSArray* _reminderNotificationReferences;
	BOOL _initialCheck;
	BOOL _shouldInstallPersistentTimer;
	BOOL _useSyncIdleTimer;
	BOOL _loadRecentlyRepliedNotifications;
	BOOL _registerForDarwinNotifications;
	long long _notificationTypes;
	NSMutableSet* _alertedNotificationsThatFailedToMarkAlerted;
	BOOL _allowedToMarkAlerted;

}

@property (nonatomic,readonly) unsigned long long notificationCount; 
@property (nonatomic,readonly) unsigned long long eventNotificationCount; 
@property (nonatomic,readonly) NSArray * notificationReferences; 
@property (nonatomic,readonly) NSArray * eventNotificationReferences; 
@property (nonatomic,readonly) NSArray * reminderNotificationReferences; 
@property (assign,nonatomic) BOOL allowedToMarkAlerted;                                //@synthesize allowedToMarkAlerted=_allowedToMarkAlerted - In the implementation block
+(id)requestedDarwinNotifications;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)_timerFired;
-(id)_eventStore;
-(void)_killSyncTimer;
-(void)_resetTimer;
-(void)attemptReloadSynchronously:(BOOL)arg1 ;
-(BOOL)wantsEvents;
-(unsigned long long)_checkForEventNotifications:(id)arg1 ;
-(BOOL)wantsReminders;
-(unsigned long long)_checkForReminderNotifications:(id)arg1 ;
-(void)_notifyForUnalertedNotifications:(id)arg1 ;
-(void)_notificationCountChangedExternally;
-(void)_alertPrefChanged;
-(void)_syncTimerFired:(id)arg1 ;
-(void)_resetSyncTimer;
-(id)initByHandlingTypes:(long long)arg1 bulletinBoardWithEventStoreGetter:(/*^block*/id)arg2 ;
-(unsigned long long)notificationCount;
-(NSArray *)notificationReferences;
-(NSArray *)reminderNotificationReferences;
-(void)handleDarwinNotification:(id)arg1 ;
-(void)_databaseChanged;
-(BOOL)allowedToMarkAlerted;
-(void)setAllowedToMarkAlerted:(BOOL)arg1 ;
-(void)killTimer;
-(void)attemptReload;
-(void)adjust;
-(id)initByHandlingOnlyEvents:(BOOL)arg1 eventStore:(id)arg2 ;
-(unsigned long long)eventNotificationCount;
-(NSArray *)eventNotificationReferences;
-(void)_syncDidStart;
-(void)_syncDidEnd;
@end
