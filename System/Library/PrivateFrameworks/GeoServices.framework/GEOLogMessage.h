/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMessage : PBCodable <NSCopying> {

	int _logMessageSubType;
	int _logMessageType;
	NSMutableArray* _logMsgEvents;
	SCD_Struct_GE45 _has;

}

@property (nonatomic,retain) NSMutableArray * logMsgEvents;              //@synthesize logMsgEvents=_logMsgEvents - In the implementation block
@property (assign,nonatomic) BOOL hasLogMessageType; 
@property (assign,nonatomic) int logMessageType;                         //@synthesize logMessageType=_logMessageType - In the implementation block
@property (assign,nonatomic) BOOL hasLogMessageSubType; 
@property (assign,nonatomic) int logMessageSubType;                      //@synthesize logMessageSubType=_logMessageSubType - In the implementation block
+(Class)logMsgEventType;
+(void)initializeAcceptedLogMsgEventTypes;
+(id)acceptedLogMsgEvents;
+(id)acceptedLogMsgEventsForLogMessageType:(int)arg1 ;
+(BOOL)logMessageType:(int)arg1 acceptsLogMsgEventType:(int)arg2 ;
+(id)logMessagesForEvent:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)logMessageType;
-(void)clearLogMsgEvents;
-(void)addLogMsgEvent:(id)arg1 ;
-(unsigned long long)logMsgEventsCount;
-(id)logMsgEventAtIndex:(unsigned long long)arg1 ;
-(void)setLogMessageType:(int)arg1 ;
-(void)setHasLogMessageType:(BOOL)arg1 ;
-(BOOL)hasLogMessageType;
-(id)logMessageTypeAsString:(int)arg1 ;
-(int)StringAsLogMessageType:(id)arg1 ;
-(int)logMessageSubType;
-(void)setLogMessageSubType:(int)arg1 ;
-(void)setHasLogMessageSubType:(BOOL)arg1 ;
-(BOOL)hasLogMessageSubType;
-(id)logMessageSubTypeAsString:(int)arg1 ;
-(int)StringAsLogMessageSubType:(id)arg1 ;
-(NSMutableArray *)logMsgEvents;
-(void)setLogMsgEvents:(NSMutableArray *)arg1 ;
-(BOOL)acceptsLogMsgEventType:(int)arg1 ;
-(id)groupIdentifier;
-(unsigned)groupSequenceNumber;
@end

