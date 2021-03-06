/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface PKProtobufPaymentClientUpdate : PBCodable <NSCopying> {

	NSMutableArray* _paymentSummaryItems;
	NSString* _remotePaymentRequestIdentifier;
	NSString* _selectedAID;
	NSMutableArray* _shippingMethods;
	unsigned _status;
	SCD_Struct_PK10 _has;

}

@property (nonatomic,readonly) BOOL hasRemotePaymentRequestIdentifier; 
@property (nonatomic,retain) NSString * remotePaymentRequestIdentifier;              //@synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned status;                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableArray * paymentSummaryItems;                   //@synthesize paymentSummaryItems=_paymentSummaryItems - In the implementation block
@property (nonatomic,retain) NSMutableArray * shippingMethods;                       //@synthesize shippingMethods=_shippingMethods - In the implementation block
@property (nonatomic,readonly) BOOL hasSelectedAID; 
@property (nonatomic,retain) NSString * selectedAID;                                 //@synthesize selectedAID=_selectedAID - In the implementation block
+(Class)paymentSummaryItemsType;
+(Class)shippingMethodsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setShippingMethods:(NSMutableArray *)arg1 ;
-(void)addShippingMethods:(id)arg1 ;
-(void)addPaymentSummaryItems:(id)arg1 ;
-(void)setSelectedAID:(NSString *)arg1 ;
-(void)setRemotePaymentRequestIdentifier:(NSString *)arg1 ;
-(BOOL)hasRemotePaymentRequestIdentifier;
-(NSString *)remotePaymentRequestIdentifier;
-(unsigned long long)paymentSummaryItemsCount;
-(void)clearPaymentSummaryItems;
-(id)paymentSummaryItemsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)shippingMethodsCount;
-(void)clearShippingMethods;
-(id)shippingMethodsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSelectedAID;
-(NSMutableArray *)paymentSummaryItems;
-(NSString *)selectedAID;
-(void)setPaymentSummaryItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)shippingMethods;
@end

