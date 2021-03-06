/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMessageCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _logMessages;

}

@property (nonatomic,retain) NSMutableArray * logMessages;              //@synthesize logMessages=_logMessages - In the implementation block
+(Class)logMessageType;
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
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)clearLogMessages;
-(void)addLogMessage:(id)arg1 ;
-(unsigned long long)logMessagesCount;
-(id)logMessageAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)logMessages;
-(void)setLogMessages:(NSMutableArray *)arg1 ;
@end

