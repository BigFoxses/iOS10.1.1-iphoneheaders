/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class UpdateMigratorConfigurationStore, NSObject, ISLoadURLBagOperation, NSMutableArray;

@interface UpdateMigrator : NSObject {

	UpdateMigratorConfigurationStore* _configurationStore;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned long long _updateType;
	ISLoadURLBagOperation* _loadURLBagOperation;
	NSMutableArray* _migrations;

}
+(id)sharedInstance;
+(BOOL)needsMigration;
-(void)_queueMigrationWithConfiguration:(id)arg1 ;
-(void)_queueMigration:(id)arg1 ;
-(void)_loadBagAndPerformMigration;
-(void)_queueMigration:(id)arg1 persist:(BOOL)arg2 ;
-(void)restoreDemotedBundleIdentifiers:(id)arg1 options:(id)arg2 ;
-(BOOL)performMigration:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_networkTypeChangedNotification:(id)arg1 ;
-(void)_performMigration;
@end
