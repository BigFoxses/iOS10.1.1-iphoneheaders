/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCCKPOperation : PBCodable <NSCopying> {

	NSString* _operationUUID;
	int _type;
	BOOL _last;
	BOOL _synchronousMode;
	SCD_Struct_FC8 _has;

}

@property (nonatomic,readonly) BOOL hasOperationUUID; 
@property (nonatomic,retain) NSString * operationUUID;              //@synthesize operationUUID=_operationUUID - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasSynchronousMode; 
@property (assign,nonatomic) BOOL synchronousMode;                  //@synthesize synchronousMode=_synchronousMode - In the implementation block
@property (assign,nonatomic) BOOL hasLast; 
@property (assign,nonatomic) BOOL last;                             //@synthesize last=_last - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)last;
-(void)setLast:(BOOL)arg1 ;
-(NSString *)operationUUID;
-(void)setOperationUUID:(NSString *)arg1 ;
-(BOOL)hasOperationUUID;
-(void)setSynchronousMode:(BOOL)arg1 ;
-(void)setHasSynchronousMode:(BOOL)arg1 ;
-(BOOL)hasSynchronousMode;
-(void)setHasLast:(BOOL)arg1 ;
-(BOOL)hasLast;
-(BOOL)synchronousMode;
@end

