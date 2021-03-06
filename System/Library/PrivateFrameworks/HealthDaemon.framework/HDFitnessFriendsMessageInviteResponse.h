/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDFitnessFriendsMessageShareLocations;

@interface HDFitnessFriendsMessageInviteResponse : PBCodable <NSCopying> {

	NSString* _handshakeToken;
	NSString* _inviteeBuildNumber;
	NSString* _inviteeCloudKitAddress;
	HDFitnessFriendsMessageShareLocations* _inviteeShareLocations;
	unsigned _inviteeVersion;
	int _responseCode;
	SCD_Struct_HD18 _has;

}

@property (nonatomic,readonly) BOOL hasHandshakeToken; 
@property (nonatomic,retain) NSString * handshakeToken;                                                  //@synthesize handshakeToken=_handshakeToken - In the implementation block
@property (assign,nonatomic) BOOL hasResponseCode; 
@property (assign,nonatomic) int responseCode;                                                           //@synthesize responseCode=_responseCode - In the implementation block
@property (nonatomic,readonly) BOOL hasInviteeCloudKitAddress; 
@property (nonatomic,retain) NSString * inviteeCloudKitAddress;                                          //@synthesize inviteeCloudKitAddress=_inviteeCloudKitAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasInviteeShareLocations; 
@property (nonatomic,retain) HDFitnessFriendsMessageShareLocations * inviteeShareLocations;              //@synthesize inviteeShareLocations=_inviteeShareLocations - In the implementation block
@property (nonatomic,readonly) BOOL hasInviteeBuildNumber; 
@property (nonatomic,retain) NSString * inviteeBuildNumber;                                              //@synthesize inviteeBuildNumber=_inviteeBuildNumber - In the implementation block
@property (assign,nonatomic) BOOL hasInviteeVersion; 
@property (assign,nonatomic) unsigned inviteeVersion;                                                    //@synthesize inviteeVersion=_inviteeVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHandshakeToken:(NSString *)arg1 ;
-(BOOL)hasHandshakeToken;
-(NSString *)handshakeToken;
-(void)setResponseCode:(int)arg1 ;
-(void)setInviteeCloudKitAddress:(NSString *)arg1 ;
-(void)setInviteeBuildNumber:(NSString *)arg1 ;
-(void)setInviteeVersion:(unsigned)arg1 ;
-(void)setInviteeShareLocations:(HDFitnessFriendsMessageShareLocations *)arg1 ;
-(NSString *)inviteeCloudKitAddress;
-(NSString *)inviteeBuildNumber;
-(unsigned)inviteeVersion;
-(int)responseCode;
-(HDFitnessFriendsMessageShareLocations *)inviteeShareLocations;
-(void)setHasResponseCode:(BOOL)arg1 ;
-(BOOL)hasResponseCode;
-(BOOL)hasInviteeCloudKitAddress;
-(BOOL)hasInviteeShareLocations;
-(BOOL)hasInviteeBuildNumber;
-(void)setHasInviteeVersion:(BOOL)arg1 ;
-(BOOL)hasInviteeVersion;
@end

