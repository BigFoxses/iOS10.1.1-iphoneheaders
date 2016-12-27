/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface _DECPredictionStoreQueuedResult : NSObject {

	unsigned long long _consumer;
	unsigned long long _category;
	NSData* _result;

}

@property (assign,nonatomic) unsigned long long consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (assign,nonatomic) unsigned long long category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSData * result;                          //@synthesize result=_result - In the implementation block
-(void)setCategory:(unsigned long long)arg1 ;
-(unsigned long long)category;
-(void)setConsumer:(unsigned long long)arg1 ;
-(unsigned long long)consumer;
-(NSData *)result;
-(void)setResult:(NSData *)arg1 ;
@end
