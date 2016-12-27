/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBDateTime, _INPBValueMetadata;

@interface _INPBDateTimeRangeValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	long long _endCalendar;
	long long _startCalendar;
	_INPBDateTime* _endDateTime;
	_INPBDateTime* _startDateTime;
	_INPBValueMetadata* _valueMetadata;
	SCD_Struct_IN3 _has;

}

@property (nonatomic,readonly) BOOL hasValueMetadata; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata;              //@synthesize valueMetadata=_valueMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasStartCalendar; 
@property (assign,nonatomic) long long startCalendar;                         //@synthesize startCalendar=_startCalendar - In the implementation block
@property (assign,nonatomic) BOOL hasEndCalendar; 
@property (assign,nonatomic) long long endCalendar;                           //@synthesize endCalendar=_endCalendar - In the implementation block
@property (nonatomic,readonly) BOOL hasStartDateTime; 
@property (nonatomic,retain) _INPBDateTime * startDateTime;                   //@synthesize startDateTime=_startDateTime - In the implementation block
@property (nonatomic,readonly) BOOL hasEndDateTime; 
@property (nonatomic,retain) _INPBDateTime * endDateTime;                     //@synthesize endDateTime=_endDateTime - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(_INPBValueMetadata *)valueMetadata;
-(void)setValueMetadata:(_INPBValueMetadata *)arg1 ;
-(BOOL)hasValueMetadata;
-(_INPBDateTime *)startDateTime;
-(_INPBDateTime *)endDateTime;
-(void)setStartDateTime:(_INPBDateTime *)arg1 ;
-(void)setEndDateTime:(_INPBDateTime *)arg1 ;
-(void)setStartCalendar:(long long)arg1 ;
-(void)setHasStartCalendar:(BOOL)arg1 ;
-(BOOL)hasStartCalendar;
-(void)setEndCalendar:(long long)arg1 ;
-(void)setHasEndCalendar:(BOOL)arg1 ;
-(BOOL)hasEndCalendar;
-(BOOL)hasStartDateTime;
-(BOOL)hasEndDateTime;
-(long long)startCalendar;
-(long long)endCalendar;
@end
