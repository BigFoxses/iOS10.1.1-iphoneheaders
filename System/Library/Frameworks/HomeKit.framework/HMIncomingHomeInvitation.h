/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMHomeInvitation.h>
#import <libobjc.A.dylib/HFPrettyDescription.h>

@class HMUser, HMHomeManager, NSString, NSUUID;

@interface HMIncomingHomeInvitation : HMHomeInvitation <HFPrettyDescription> {

	HMUser* _inviter;
	HMHomeManager* _homeManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) HMHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,readonly) HMUser * inviter;                              //@synthesize inviter=_inviter - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeName; 
@property (nonatomic,copy,readonly) NSUUID * homeUUID; 
+(BOOL)supportsSecureCoding;
+(id)homeInvitationsFromEncodedData:(id)arg1 homeManager:(id)arg2 ;
+(id)homeInvitationsFromData:(id)arg1 homeManager:(id)arg2 ;
-(id)hf_prettyDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3 ;
-(void)_cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithInvitationData:(id)arg1 homeManager:(id)arg2 ;
-(void)_acceptInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(HMHomeManager *)homeManager;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(NSString *)homeName;
-(NSUUID *)homeUUID;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)acceptInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(HMUser *)inviter;
@end
