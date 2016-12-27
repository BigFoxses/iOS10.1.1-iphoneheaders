/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/MessageAccountsMigrator.migrator/MessageAccountsMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class ACAccountStore;

@interface MessageAccountsMigrator : DataClassMigrator {

	ACAccountStore* _accountStore;

}
-(BOOL)_removeAccounts:(id)arg1 ;
-(BOOL)_saveAccounts:(id)arg1 ;
-(BOOL)removeSMTPAccountsThatShouldBeDynamic;
-(float)migrationProgress;
-(id)init;
-(void)dealloc;
-(float)estimatedDuration;
-(id)initWithAccountStore:(id)arg1 ;
-(id)dataClassName;
-(BOOL)performMigration;
@end
