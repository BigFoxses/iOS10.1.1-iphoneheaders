/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PQLResultSet, BRCSyncContext;

@interface BRCFSDownloaderBatchEnumerator : NSObject {

	long long _now;
	long long* _retryQueueKick;
	PQLResultSet* _rs;
	BRCSyncContext* _syncContext;

}

@property (nonatomic,readonly) BRCSyncContext * syncContext;              //@synthesize syncContext=_syncContext - In the implementation block
-(void)close;
-(id)etag;
-(long long)completedUnitCount;
-(BRCSyncContext *)syncContext;
-(id)initWithSyncContext:(id)arg1 kind:(int)arg2 now:(long long)arg3 retryQueueKick:(long long*)arg4 ;
-(id)nextDocumentItem;
-(id)stageID;
@end

