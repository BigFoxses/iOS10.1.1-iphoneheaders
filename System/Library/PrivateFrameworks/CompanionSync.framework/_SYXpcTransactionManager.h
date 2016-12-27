/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSMutableSet;

@interface _SYXpcTransactionManager : NSObject {

	NSMutableDictionary* _table;
	NSObject*<OS_dispatch_queue> _syncQ;
	NSMutableSet* _errorsForStateDump;
	unsigned long long _stateHandle;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_logBacktraceForStateDump:(id)arg1 name:(id)arg2 message:(id)arg3 ;
-(void)beginTransactionWithName:(id)arg1 file:(id)arg2 line:(int)arg3 andFunction:(id)arg4 ;
-(void)endTransactionWithName:(id)arg1 file:(id)arg2 line:(int)arg3 andFunction:(id)arg4 ;
-(void)logOpenTransactions;
@end
