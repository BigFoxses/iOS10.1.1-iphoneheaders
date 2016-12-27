/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, HDCodableSample;

@interface HDCodableFitnessFriendAchievement : PBCodable <HDDecoding, NSCopying> {

	double _completedDate;
	double _doubleValue;
	long long _intValue;
	long long _workActivityType;
	NSString* _definitionIdentifier;
	NSData* _extraData;
	NSData* _friendUUID;
	HDCodableSample* _sample;
	SCD_Struct_HD19 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;                     //@synthesize sample=_sample - In the implementation block
@property (nonatomic,readonly) BOOL hasFriendUUID; 
@property (nonatomic,retain) NSData * friendUUID;                          //@synthesize friendUUID=_friendUUID - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedDate; 
@property (assign,nonatomic) double completedDate;                         //@synthesize completedDate=_completedDate - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                           //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasIntValue; 
@property (assign,nonatomic) long long intValue;                           //@synthesize intValue=_intValue - In the implementation block
@property (nonatomic,readonly) BOOL hasExtraData; 
@property (nonatomic,retain) NSData * extraData;                           //@synthesize extraData=_extraData - In the implementation block
@property (assign,nonatomic) BOOL hasWorkActivityType; 
@property (assign,nonatomic) long long workActivityType;                   //@synthesize workActivityType=_workActivityType - In the implementation block
@property (nonatomic,readonly) BOOL hasDefinitionIdentifier; 
@property (nonatomic,retain) NSString * definitionIdentifier;              //@synthesize definitionIdentifier=_definitionIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(double)doubleValue;
-(long long)intValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIntValue:(long long)arg1 ;
-(void)setHasIntValue:(BOOL)arg1 ;
-(BOOL)hasIntValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(void)setSample:(HDCodableSample *)arg1 ;
-(NSString *)definitionIdentifier;
-(double)completedDate;
-(void)setDefinitionIdentifier:(NSString *)arg1 ;
-(void)setCompletedDate:(double)arg1 ;
-(void)setExtraData:(NSData *)arg1 ;
-(BOOL)hasSample;
-(HDCodableSample *)sample;
-(NSData *)friendUUID;
-(void)setHasCompletedDate:(BOOL)arg1 ;
-(BOOL)hasCompletedDate;
-(BOOL)hasDefinitionIdentifier;
-(void)setFriendUUID:(NSData *)arg1 ;
-(BOOL)hasFriendUUID;
-(BOOL)applyToObject:(id)arg1 ;
-(void)setWorkActivityType:(long long)arg1 ;
-(BOOL)hasExtraData;
-(long long)workActivityType;
-(void)setHasWorkActivityType:(BOOL)arg1 ;
-(BOOL)hasWorkActivityType;
-(NSData *)extraData;
@end
