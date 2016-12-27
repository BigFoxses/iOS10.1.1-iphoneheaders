/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface _INPBDataString : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _localizedValue;
	NSString* _vocabularyIdentifier;

}

@property (nonatomic,readonly) BOOL hasLocalizedValue; 
@property (nonatomic,retain) NSString * localizedValue;                      //@synthesize localizedValue=_localizedValue - In the implementation block
@property (nonatomic,readonly) BOOL hasVocabularyIdentifier; 
@property (nonatomic,retain) NSString * vocabularyIdentifier;                //@synthesize vocabularyIdentifier=_vocabularyIdentifier - In the implementation block
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
-(void)setLocalizedValue:(NSString *)arg1 ;
-(void)setVocabularyIdentifier:(NSString *)arg1 ;
-(BOOL)hasLocalizedValue;
-(BOOL)hasVocabularyIdentifier;
-(NSString *)localizedValue;
-(NSString *)vocabularyIdentifier;
@end
