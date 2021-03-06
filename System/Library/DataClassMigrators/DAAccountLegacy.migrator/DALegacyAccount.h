/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/DAAccountLegacy.migrator/DAAccountLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface DALegacyAccount : NSObject {

	NSMutableDictionary* _properties;

}

@property (nonatomic,readonly) NSMutableDictionary * properties;              //@synthesize properties=_properties - In the implementation block
-(id)host;
-(id)initWithProperties:(id)arg1 ;
-(NSMutableDictionary *)properties;
-(long long)port;
-(int)daAccountVersion;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)removeAccountPropertyForKey:(id)arg1 ;
-(BOOL)useSSL;
-(id)accountPropertyForKey:(id)arg1 ;
-(void)resetAccountID;
-(id)changeTrackingID;
-(id)username;
-(void)setPrincipalURL:(id)arg1 ;
-(BOOL)upgradeAccountWithParent:(id)arg1 ;
-(void)_removeHostsToTrust;
-(BOOL)_upgradeSelfFromPreKirkwood;
-(id)accountID;
@end

