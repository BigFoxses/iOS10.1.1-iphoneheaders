/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@interface CKDFetchUserQuotaOperation : CKDDatabaseOperation {

	unsigned long long _quotaAvailable;

}

@property (assign,nonatomic) unsigned long long quotaAvailable;              //@synthesize quotaAvailable=_quotaAvailable - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(id)activityCreate;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
-(void)setQuotaAvailable:(unsigned long long)arg1 ;
-(unsigned long long)quotaAvailable;
@end

