/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolNetworkWebSocketFrame : RWIProtocolJSONObject

@property (assign,nonatomic) double opcode; 
@property (assign,nonatomic) BOOL mask; 
@property (nonatomic,copy) NSString * payloadData; 
-(BOOL)mask;
-(void)setMask:(BOOL)arg1 ;
-(void)setOpcode:(double)arg1 ;
-(double)opcode;
-(void)setPayloadData:(NSString *)arg1 ;
-(id)initWithOpcode:(double)arg1 mask:(BOOL)arg2 payloadData:(id)arg3 ;
-(NSString *)payloadData;
@end

