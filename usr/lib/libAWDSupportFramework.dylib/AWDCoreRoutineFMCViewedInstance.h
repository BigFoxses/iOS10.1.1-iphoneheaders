/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:39:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineFMCViewedInstance : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _parkingId;
	int _uiPlacement;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasParkingId; 
@property (nonatomic,retain) NSString * parkingId;                      //@synthesize parkingId=_parkingId - In the implementation block
@property (assign,nonatomic) BOOL hasUiPlacement; 
@property (assign,nonatomic) int uiPlacement;                           //@synthesize uiPlacement=_uiPlacement - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setParkingId:(NSString *)arg1 ;
-(BOOL)hasParkingId;
-(void)setUiPlacement:(int)arg1 ;
-(void)setHasUiPlacement:(BOOL)arg1 ;
-(BOOL)hasUiPlacement;
-(NSString *)parkingId;
-(int)uiPlacement;
@end

