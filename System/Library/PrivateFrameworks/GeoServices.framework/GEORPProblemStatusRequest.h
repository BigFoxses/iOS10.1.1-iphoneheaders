/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOABSecondPartyPlaceRequestClientMetaData, GEOPDAnalyticMetadata, GEORPClientCapabilities, NSMutableArray, NSString, GEORPUserCredentials;

@interface GEORPProblemStatusRequest : PBRequest <NSCopying> {

	GEOABSecondPartyPlaceRequestClientMetaData* _abAssignmentMetadata;
	GEOPDAnalyticMetadata* _analyticMetadata;
	GEORPClientCapabilities* _clientCapabilities;
	NSMutableArray* _problemIds;
	NSString* _statusNotificationId;
	GEORPUserCredentials* _userCredentials;

}

@property (nonatomic,readonly) BOOL hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials;                                         //@synthesize userCredentials=_userCredentials - In the implementation block
@property (nonatomic,readonly) BOOL hasStatusNotificationId; 
@property (nonatomic,retain) NSString * statusNotificationId;                                                //@synthesize statusNotificationId=_statusNotificationId - In the implementation block
@property (nonatomic,retain) NSMutableArray * problemIds;                                                    //@synthesize problemIds=_problemIds - In the implementation block
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEORPClientCapabilities * clientCapabilities;                                   //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,readonly) BOOL hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata;                                       //@synthesize analyticMetadata=_analyticMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasAbAssignmentMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * abAssignmentMetadata;              //@synthesize abAssignmentMetadata=_abAssignmentMetadata - In the implementation block
+(Class)problemIdType;
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
-(BOOL)hasClientCapabilities;
-(GEORPClientCapabilities *)clientCapabilities;
-(void)setClientCapabilities:(GEORPClientCapabilities *)arg1 ;
-(BOOL)hasAnalyticMetadata;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(BOOL)hasUserCredentials;
-(GEORPUserCredentials *)userCredentials;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(BOOL)hasStatusNotificationId;
-(void)clearProblemIds;
-(void)addProblemId:(id)arg1 ;
-(unsigned long long)problemIdsCount;
-(id)problemIdAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAbAssignmentMetadata;
-(NSString *)statusNotificationId;
-(void)setStatusNotificationId:(NSString *)arg1 ;
-(NSMutableArray *)problemIds;
-(void)setProblemIds:(NSMutableArray *)arg1 ;
-(GEOABSecondPartyPlaceRequestClientMetaData *)abAssignmentMetadata;
-(void)setAbAssignmentMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(void)populateAnalyticsMetadata;
@end

