/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSMutableSet;

@interface Client : NSObject {

	NSXPCConnection* _connection;
	NSMutableSet* _subscribedNOIs;

}

@property (nonatomic,retain) NSXPCConnection * connection;               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableSet * subscribedNOIs;              //@synthesize subscribedNOIs=_subscribedNOIs - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithConn:(id)arg1 ;
-(NSMutableSet *)subscribedNOIs;
-(void)setSubscribedNOIs:(NSMutableSet *)arg1 ;
@end

